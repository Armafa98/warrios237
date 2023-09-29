/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:22:16 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/27 16:23:52 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	lenght;
	unsigned int	i;

	lenght = 0;
	i = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (lenght);
}

#include <stdio.h>
int main()
{
	char source[] = "TestTest TestTest";
	char destination[] = "hello";
	unsigned int result = ft_strlcpy(destination, source, 14);
	printf("Source lenght: %d\n", result);
	printf("Destination: %s\n", destination);
}
