/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egermain <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:57:09 by egermain          #+#    #+#             */
/*   Updated: 2023/09/28 19:58:04 by egermain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && (j < nb))
	{
		dest[i] = src[j];
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

	//printf (" we're going to concatenate two strings with ft_strncat \n");
	//printf (" the first one is called dest and contains data : %s \n", dest);
	//printf (" the second  is called src and contains data : %s \n", src);
	
	//strncat (dest, src, nb);
	//printf ("strcat function from library gives back : %s \n", dest);
	
	//ft_strncat(dest, src, nb);
	printf (" with our own function gives back : %s\n", ft_strncat(dest, src, 3));
	return (0);
}
*/
