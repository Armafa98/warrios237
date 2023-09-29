/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:53:19 by tpare             #+#    #+#             */
/*   Updated: 2023/09/25 20:35:10 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	l;
	unsigned int	i;

	l = 0;
	i = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0' && i < nb)
	{
		dest[l + i] = src[i];
		i++;
	}
	i++;
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "yo";
	char src[] = "bonjour ";

	printf("%s", ft_strncat(dest, src, 3));
}
