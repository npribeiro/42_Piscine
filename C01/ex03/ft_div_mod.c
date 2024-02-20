/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:27:06 by npascoal          #+#    #+#             */
/*   Updated: 2024/01/31 14:21:54 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main(void)
{
    int a = 10;
    int b = 3;
    int result_div, result_mod;

    ft_div_mod(a, b, &result_div, &result_mod);

    printf("Resultado da divisão: %d\n", result_div);
    printf("Resto da divisão: %d\n", result_mod);

    return 0;
}
*/
