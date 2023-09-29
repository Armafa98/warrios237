/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisan <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:04:15 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/25 08:09:47 by amoisan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (str[i] >= 32 && str[i] <= 126)
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
#include <stddef.h>
int main()
{
	char string[] = "";
	int result = ft_str_is_printable(string);
	printf("%d\n", result);

	char string2[] = "test";
	int result2 = ft_str_is_printable(string2);
	printf("%d\n", result2);
	
	char string3[] = "\n";
	int result3 = ft_str_is_printable(string3);
	printf("%d\n", result3);
}
*/
