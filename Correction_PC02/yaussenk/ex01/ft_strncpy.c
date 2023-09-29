/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaussenk <yaussenk@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:53:02 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/21 13:50:09 by yaussenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int	n;
	char	dest[20] = "il y a un texte ici";
	char	src[15] = "un autre texte";

	n = 20;
	printf ("before the copy:%s\n", dest);
	ft_strncpy(dest, src, n);
	printf ("after the copy:%s\n", dest);
	return (0);
}*/
