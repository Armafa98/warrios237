/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:03:18 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 19:56:32 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char source[] = "Test";
	char destination[10];
	
	strcpy(destination, source);

	printf("Ex: Source : %s\n", source);
	printf("Ex: Destination : %s\n", destination);
	
	char x[] = "Mushroom";
	char y[20];

	ft_strcpy(y, x);

	printf("Destination: %s\n", x);

}*/
