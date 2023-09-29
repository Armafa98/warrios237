/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:59:11 by tpare             #+#    #+#             */
/*   Updated: 2023/09/27 21:16:19 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	l;

	l = 0;
	while (l < n)
	{
		if (s1[l] == '\0' || s2[l] == '\0' || s1[l] != s2[l])
		{
			return ((unsigned char)s1[l] - (unsigned char)s2[l]);
		}
		l++;
	}
	return (0);
}

int main()
{
	char s1[] = "zonjour";
	char s2[] = "bonjour";

	printf("%d", ft_strncmp(s1, s2, 5));
}
