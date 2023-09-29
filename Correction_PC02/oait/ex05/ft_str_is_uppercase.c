/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:43:16 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/25 12:43:19 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] >= 65 && str[i] <= 90)
	{
		i++;
	}
	if (str[i] != '\0')
		return (0);
	else
		return (1);
}
/*
int main ()
{
    char phrase [] = "je m'appelle Oussama";
    char mot [] = "SALUT";
    int a;
    int b;

    b = ft_str_is_uppercase(mot);
    a = ft_str_is_uppercase(phrase);
 printf("phrase doit etre 0 %d", a);
 printf("\n");
 printf("mot doit etre 1 %d", b);
}*/
