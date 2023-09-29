/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:40:17 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/25 12:40:20 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		i++;
	}
	if (str[i] != '\0')
		return (0);
	else
		return (1);
}

int main ()
{
    char phrase [] = "je m'appelle Oussama";
    char chiffre [] = "012345";
    int a;
    int b;

    b = ft_str_is_numeric(chiffre);
    a = ft_str_is_numeric(phrase);
 printf("phrase doit etre 0 %d", a);
 printf("\n");
 printf("chiffre doit etre 1 %d", b);
}
