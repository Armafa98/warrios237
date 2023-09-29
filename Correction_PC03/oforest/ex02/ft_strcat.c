/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:41:08 by oforest           #+#    #+#             */
/*   Updated: 2023/09/27 22:13:43 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0' )
	{
		a++;
	}
	return (a);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		(*dest++ = *src++);
	}
	*dest = '\0';
	return (ptr);
}

char	*ft_strcat(char *dest, char *src)
{
	int		len_dest;
	char	*cat;

	len_dest = ft_strlen(dest);
	cat = &dest[len_dest];
	ft_strcpy(src, cat);
	return (dest);
}

int main(void)
{
	char	dest[100] = "hello, \0";
	char	src[10] = "world\0";
	printf("strcat; %s\n", strcat(dest, src));

	ft_strcat(dest, src);
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	return (0);
}
