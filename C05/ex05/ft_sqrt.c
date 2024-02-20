/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:12:33 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/10 16:44:46 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}

/* #include <stdio.h>

int main()
{
	int num;

	printf("Enter a number = ");
    scanf("%d", &num);
    printf("The sqrt is: %d", ft_sqrt(num));
    printf("\n");
    return 0;
} */
