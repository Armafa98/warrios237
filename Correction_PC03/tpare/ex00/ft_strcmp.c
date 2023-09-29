/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:19:08 by tpare             #+#    #+#             */
/*   Updated: 2023/09/25 20:18:05 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while (s1[l] == s2[l] && s1[l] != '\0' && s2[l] != '\0')
		l++;
	return ((unsigned char)s1[l] - (unsigned char)s2[l]);
}

int main()
{
	char s1[] = "zonjour";
	char s2[] = "bonjour";

	printf("%d", ft_strcmp(s1, s2));
}
