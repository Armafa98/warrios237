/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 01:57:23 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/22 11:31:07 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && (s1[i] == s2[i] && (s1[i]) && (s2[i])))
		i++;
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	char	s1[] = "Quelle est la température dehors?";
// 	char	s2[] = "il fait environ 20 dégré celsius!";

// 	printf("réponse = %d", ft_strncmp(s1, s2, 1));
// }
