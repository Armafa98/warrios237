/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpare <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 19:53:19 by tpare             #+#    #+#             */
/*   Updated: 2023/09/26 18:24:56 by tpare            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
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
	dest[l + i] = '\0';
	return (dest);
}
/*
int main()
{
	char dest[] = "yo";
	char src[] = "bonjour ";

	printf("%s", ft_strcat(dest, src));
}*/
