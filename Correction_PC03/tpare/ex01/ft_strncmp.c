/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpare <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:59:11 by tpare             #+#    #+#             */
/*   Updated: 2023/09/25 19:19:39 by tpare            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	l;

	l = 0;
	if (n == 0)
		return (0);
	while (l < n && s1[l] != '\0' && s2[l] != '\0')
	{
		if (s1[l] != s2[l])
			break ;
		l++;
	}
	return ((unsigned char) s1[l] - (unsigned char)s2[l]);
}
/*
int main()
{
	char s1[] = "42 is the answer.";
	char s2[] = "42 is zhe answer.";

	printf("%d", ft_strncmp(s1, s2, 6));
}*/
