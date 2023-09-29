/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:08:03 by mmorisse          #+#    #+#             */
/*   Updated: 2023/09/23 21:09:54 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	buf_src[] = "je te deteste";
	char	buf_dest[50];

	printf("\n mon mess -> DEST = %s\n", ft_strcpy(buf_dest, buf_src));
	return (0);
}
