/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:53:19 by tpare             #+#    #+#             */
/*   Updated: 2023/09/25 20:37:48 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	while (dest[l] != '\0')
		l++;
	while (src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char dest[] = "yo";
	char src[] = "bonjour ";

	printf("%s", ft_strcat(dest, src));
}
