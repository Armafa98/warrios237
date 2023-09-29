/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisan <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:44:02 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/22 11:42:52 by amoisan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	int result = ft_str_is_uppercase(string);
	printf("%d\n", result);

	char string2[] = "TEST";
	int result2 = ft_str_is_uppercase(string2);
	printf("%d\n", result2);
	
	char string3[] = "test!tat34tse";
	int result3 = ft_str_is_uppercase(string3);
	printf("%d\n", result3);
}
*/
