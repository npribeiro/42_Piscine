/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:05:45 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/07 10:05:45 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[20] = "Hello";
    char src[] = ", World!";
    unsigned int size = 20;
    unsigned int total_length = ft_strlcat(dest, src, size);

    write(1, "Concatenated String: ", 21);
    write(1, dest, total_length);
    write(1, "\nTotal Length: ", 15);
    char buffer[10];
    sprintf(buffer, "%u", total_length);
    write(1, buffer, strlen(buffer));
    write(1, "\n", 1);

    return (0);
}
*/
