/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:44:38 by npascoal          #+#    #+#             */
/*   Updated: 2024/01/31 13:58:52 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = c / *b;
	*b = c % *a;
}

/*
int main(void)
{
    int a = 15;
    int b = 3;

    ft_ultimate_div_mod(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}
*/
