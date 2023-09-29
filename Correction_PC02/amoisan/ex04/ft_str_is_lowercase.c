/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisan <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:35:22 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/25 12:49:37 by amoisan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	temp;

	i = 0;
	if (str[i] == '\0')
	{
		temp = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			temp = 1;
		}
		else
		{
			temp = 0;
			break ;
		}
		i++;
	}
	return (temp);
}

/*
#include <stdio.h>

int main()
{
	char string[] = "";
	int result = ft_str_is_lowercase(string);
	printf("%d\n", result);

	char string2[] = "test";
	int result2 = ft_str_is_lowercase(string2);
	printf("%d\n", result2);

	char string3[] = "teSTooo";
	int result3 = ft_str_is_lowercase(string3);
	printf("%d\n", result3);
}
*/
