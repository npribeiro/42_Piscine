/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:32:33 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/10 18:27:25 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
// #include <stdio.h>

// int main(void)
// {
// 	int pwr;
// 	int num;
//     printf("Enter a base number = ");
//     scanf("%i", &num);
//     printf("Enter a exponent number = ");
//     scanf("%i", &pwr);
//     printf("The result is: %i", ft_recursive_power(num, pwr));
//     printf("\n");
//     return 0;

// } 