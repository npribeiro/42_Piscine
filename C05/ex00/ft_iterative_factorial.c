/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:39:13 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/10 16:21:49 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	while (nb < 0)
	{
		return (0);
	}
	while (nb == 0)
	{
		return (1);
	}
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

/* #include <stdio.h>

int main()
{
    int num;
    printf("Enter a whole number to find factorial = ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d", num, ft_iterative_factorial(num));
    printf("\n");
    return 0;
} */
