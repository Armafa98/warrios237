/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:21:53 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/21 13:12:15 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char str[10] = "oaijrg;os";
	char str2[25] = "Je suis étudiant chez 42";
	char str3[12] = "asdfqwerzxc";
	char str4[8] = "RhScDhG";
	char str5[1] = "";
	int result;
//test1
	result = ft_str_is_alpha(str);
	printf("Cette chaîne est alpha? %s : %d\n", str, result);
	
	result = ft_str_is_alpha(str2);
	printf("Cette chaîne est alpha? %s : %d\n", str2, result);

	result = ft_str_is_alpha(str3);
	printf("Cette chaîne est alpha? %s : %d\n", str3, result);

	result = ft_str_is_alpha(str4);
	printf("Cette chaîne est alpha? %s : %d\n", str4, result);
	
	result = ft_str_is_alpha(str5);
	printf("Cette chaîne vide est alpha? %d\n", result);
	
	return (0);
}
*/