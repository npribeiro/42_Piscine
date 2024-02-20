/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:20:27 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/07 10:20:27 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
/*
#include <stdio.h>

int main(void)
{
    printf("This should be 2147483648\n");
    ft_putnbr(2147483648);
    printf("\nThis should be -2147483648\n");
    ft_putnbr(-2147483648);
    printf("\nThis should be 0\n");
    ft_putnbr(0);
    printf("\nThis should be 1\n");
    ft_putnbr(1);
    printf("\nThis should be 42\n");
    ft_putnbr(42);
    printf("\n");
    return (0);
}
*/
