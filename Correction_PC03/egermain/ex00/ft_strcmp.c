/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:39:25 by egermain          #+#    #+#             */
/*   Updated: 2023/09/28 21:37:09 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		result;

	i = 0;
	while (s1[i])
	{
		i++;
		if (s1[i] == s2[i])
		{
			result = 0;
		}
		else if ((s1[i] < s2[i]))
		{
			result = (s1[i] - s2[i]);
			return (result);
		}
		else if ((s1[i] > s2[i]))
		{
			result = ((s1[i] - s2[i]));
			return (result);
		}
	}
	return (result);
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	index;

// 	index = 0;
// 	while ((s1[index] == s2[index]) && (s1[index] & s2[index]))
// 		index++;
// 	return (s1[index] - s2[index]);
// }

#include <stdio.h>
#include <string.h>

int	main(void)
{
	// char	s1[] = "mecepillolosdientesconunacepilladedientes";
	// char	s2[] = "mecepillolosdientesconunacepilladecaballo";
	char	s3[] = "ABC";
	char	s4[] = "maman";
	int		resultat2;

	// ft_strcmp(s3, s4);
	printf(" %d \n ", ft_strcmp(s3, s4));
	// resultat2 = strcmp(s3, s4);
	// printf(" %d \n", resultat2);
	return(0);
}
