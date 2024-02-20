/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npascoal <npascoal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:05:17 by npascoal          #+#    #+#             */
/*   Updated: 2024/02/07 10:18:00 by npascoal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str[] = "Hello, World!";
    char to_find[] = "World";
    char *result = ft_strstr(str, to_find);

    if (result != NULL)
    {
        write(1, "Found: ", 7);
        write(1, result, 5);
        write(1, "\n", 1);
    }
    else
    {
        write(1, "Not Found", 9);
        write(1, "\n", 1);
    }

    return (0);
}
*/
