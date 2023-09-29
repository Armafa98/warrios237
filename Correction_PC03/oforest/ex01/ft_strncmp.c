/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 22:02:43 by oforest           #+#    #+#             */
/*   Updated: 2023/09/27 22:11:34 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	while ((ss1[i] != 0 || ss2[i] != 0) && i < n)
	{
		if (ss1[i] < ss2[i])
			return (-1);
		else if (ss1[i] > ss2[i])
			return (1);
		i++;
	}
	return (0);
}

int main(void)
{
	int a;

	a = ft_strncmp("hello", "hello", 4);
	printf ("equal: %d\n", a);

	a = ft_strncmp("Test", "test", 4);
	printf("less then: %d\n", a);
	return (0);
	a = ft_strncmp("test", "Test", 4);
	printf("more then: %d\n", a);
}
