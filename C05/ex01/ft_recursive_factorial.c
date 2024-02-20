/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 13:40:08 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/10 16:27:22 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* #include <stdio.h>

int main()
{
    int num;
    printf("Enter a whole number to find factorial = ");
    scanf("%d", &num);
    printf("Factorial of %d is: %d", num, ft_recursive_factorial(num));
    printf("\n");
    return 0;
} */
