/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:07:11 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/26 13:15:43 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char str[23] = "weeeee234ee";
	char str1[10] = "oaijrg;os";
	char str2[25] = "235 42";
	char str3[12] = "46712345854";
	char str4[8] = "1";
	char str5[2] = "";
	int result;

	result = ft_str_is_numeric(str);
	printf("cette chaine est numerique uniquement? %s : %d\n", str, result);
//test1
	result = ft_str_is_numeric(str1);
	printf("Cette chaîne est numérique? %s : %d\n", str1, result);
//test2	
	result = ft_str_is_numeric(str2);
	printf("Cette chaîne est numérique? %s : %d\n", str2, result);
//test3
	result = ft_str_is_numeric(str3);
	printf("Cette chaîne est numérique? %s : %d\n", str3, result);
//test4
	result = ft_str_is_numeric(str4);
	printf("Cette chaîne est numérique? %s : %d\n", str4, result);
//test5
	result = ft_str_is_numeric(str5);
	printf("Cette chaîne vide est numérique? %d\n", result);
	return (0);
}*/