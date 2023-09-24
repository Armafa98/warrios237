/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 00:46:48 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/21 22:35:08 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] & s2[index]))
		index++;
	return (s1[index] - s2[index]);
}

// int	main(void)
// {
// 	char	s1[] = "quelle est la température dehors?";
// 	char	s2[] = "il fait environ 20 dégré celsius!";

// 	printf("réponse = %d", ft_strcmp(s1, s2));
// }
