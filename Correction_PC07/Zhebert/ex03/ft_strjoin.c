/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:10:06 by zhebert           #+#    #+#             */
/*   Updated: 2023/10/04 20:27:25 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*store;
	int		i;
	int		j;
	int		c;

	store = (char *)malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			store[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			store[c++] = sep[j++];
		}
		i++;
	}
	store[c] = '\0';
	return (store);
}
/*
int	main()
{
	char	*tab[4];
	tab[0] = " wow ";
	tab[1] = " truly ";
	tab[2] = " touching ";
	tab[3] = " . ";
	
	printf("%s", ft_strjoin(4, tab, "bromigo"));
	return (0);
	free(tab);
}
*/