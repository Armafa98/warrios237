/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:29:41 by oforest           #+#    #+#             */
/*   Updated: 2023/09/27 22:16:50 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len_dest;
	int				len_src;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (src[i] != '\0' && nb--)
	{
		dest[i + len_dest] = src[i];
		i++;
	}
	dest[i + len_dest] = '\0';
	return (dest);
}

int main(void)
{
	char src[] = "123455555";
	char dest[21] = "12345";

	ft_strncat(dest, src, 2);
	printf("%s", dest);
	return (0);
}
