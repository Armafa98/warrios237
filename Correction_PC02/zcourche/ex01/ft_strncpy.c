/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:50:40 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 19:57:00 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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

#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main(void)
{
	char	dst[20];
	const char	*src = "Mushroom";
	
	strncpy(dst, src, 20);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);

	char dest[] = "         ";
	char *srce = "Cooker";
	unsigned int s = 20;


	ft_strncpy(dest, srce, s);

	printf("My function: %s\n", dest);
	return(0);

}
