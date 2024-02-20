/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:46:47 by npascoal          #+#    #+#             */
/*   Updated: 2024/01/30 16:06:04 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n);

void	ft_print_combn_recursive(int n, int prev, char *comb, int length);

void	ft_print_combn(int n)
{
	char	comb[n];

	ft_print_combn_recursive(n, 0, comb, 0);
}

void	ft_print_combn_recursive(int n, int prev, char *comb, int length)
{
	int	i;

	if (length == n)
	{
		write(1, comb, n);
		if (comb[0] != '9' + 1 - n + '0')
			write(1, ", ", 2);
		return; 
	}
	i = prev;
	while (i <= 10 - n + length)
	{
		comb[length] = i + '0';
		ft_print_combn_recursive(n, i + 1, comb, length + 1);
		i++;
	}
}

/*
   int main(void)
   {
   ft_print_combn(2);
   return (0);
   }
   */
