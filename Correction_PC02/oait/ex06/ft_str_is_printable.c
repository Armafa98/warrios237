/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:44:10 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/25 12:44:12 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] >= 32 && str[i] <= 126)
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
    char tableau[] = "salutation";
    tableau[3] = '\n'; // Affecte un saut de ligne (code ASCII 10)
		       // à la première case
    tableau[4] = '\t'; // Affecte une tabulation (code ASCII 9)
		       // à la deuxième case
    //char phrase [] = "je m'appelle Oussama";
    char mot [] = "SALUT";
    int a;
    int b;

    b = ft_str_is_printable(mot);
    a = ft_str_is_printable(tableau);
 printf("taleau doit etre 0 %d", a);
 printf("\n");
 printf("mot doit etre 1 %d", b);
}
