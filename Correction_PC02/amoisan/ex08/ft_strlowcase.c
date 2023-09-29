/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisan <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:28:55 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/22 11:45:24 by amoisan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str [i] + 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int main()
{
	char string[] = "tESt";
	ft_strlowcase(string);
	printf("%s\n", string);
}
*/
