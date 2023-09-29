/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaussenk <yaussenk@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:28:00 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/21 13:53:58 by yaussenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[4];
	dest[0] = 'o';
	dest[1] = 'n';
	dest[2] = 'e';
	dest[3] = '\0';
    char	src[4];
    src[0] = 't';
    src[1] = 'w';
    src[2] = 'o';
	src[3] = '\0';
	printf("before the copy:%s\n", dest);
	ft_strcpy(dest, src);
	printf("after the copy:%s\n", dest);
}*/
