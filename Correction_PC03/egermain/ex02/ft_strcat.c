/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermain <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:57:09 by egermain          #+#    #+#             */
/*   Updated: 2023/09/27 16:33:23 by egermain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[1024] = "111Crotte";
	char	src[1024] =  "222deLapin";

	printf (" we're going to concatenate two strings with ft_strcat \n");
	printf (" the first one is called dest and contains data : %s \n", dest);
	printf (" the second  is called src and contains data : %s \n", src);
	
	strcat (dest, src);
	printf ("strcat function from library gives back : %s \n", dest);
	
	ft_strcat(dest, src);
	printf (" with our own function gives back : %s \n", ft_strcat(dest, src));
	return (0);
}
*/
