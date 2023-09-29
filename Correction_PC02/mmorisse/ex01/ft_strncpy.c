/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:20:17 by mmorisse          #+#    #+#             */
/*   Updated: 2023/09/23 21:13:09 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char buf_src[] = "i love you forever!";
	char buf_dest[20];

	unsigned int n;

	n = 10;
	printf("\n Mon message est = %s \n", ft_strncpy(buf_dest, buf_src, n));
	return (0);
}
