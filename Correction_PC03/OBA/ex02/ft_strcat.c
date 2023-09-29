/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 02:15:34 by oba               #+#    #+#             */
/*   Updated: 2023/09/26 20:27:00 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	compte(char *str)
{
	int	compte;

	compte = 0;
	while (str[compte] != '\0')
	{
		compte++;
	}
	return (compte);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	nombre;

	nombre = 0;
	len = compte(dest);
	while (src[nombre] != '\0')
	{
		dest[len] = src[nombre];
		nombre++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
// int main()
// {
// char string1[80] ="bonjour " ;
// char string2[30]="les terriens de la lune";

// ft_strcat(string1,string2);

// printf("la phrase est : %s",string1);

// return 0;}