/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:26:45 by npascoal          #+#    #+#             */
/*   Updated: 2024/01/31 13:27:51 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int*b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
int main() {
    int num1 = 1;
    int num2 = 2;

    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);
    ft_swap(&num1, &num2);
    printf("Depois da troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/
