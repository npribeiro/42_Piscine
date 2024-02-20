/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 14:32:04 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/10 16:28:58 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}

/* #include <stdio.h>

int main(void)
{
    int num;
    int pwr;
    printf("Enter a base number = ");
    scanf("%d", &num);
    printf("Enter a exponent number = ");
    scanf("%d", &pwr);
    printf("The result is: %d", ft_iterative_power(num, pwr));
    printf("\n");
    return 0;
} */
