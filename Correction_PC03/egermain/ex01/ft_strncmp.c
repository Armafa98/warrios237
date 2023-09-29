/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:40:21 by egermain          #+#    #+#             */
/*   Updated: 2023/09/28 21:31:51 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;
	int		result;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			i++;
		}
	}
	return (result);
}

// int	ft_strncmp(char *s1, char *s2, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (n == 0)
// 		return (0);
// 	while (i + 1 < n && (s1[i] == s2[i]))
// 		i++;
// 	return (s1[i] - s2[i]);
// }

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	s1[]="bozettesbob";
	char	s2[]="bobettes";

	//ft_strncmp(s1, s2, 5);
	printf("resultat est : %d", ft_strncmp(s1, s2, 5));
	return(0);
}
