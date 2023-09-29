/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:51:47 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/28 23:52:40 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	int	max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int		max(int *tab, unsigned int len);

int		main(int argc, char **argv)
{
	int	*tab;
	int i = 0;

	if (!(tab = (int*)malloc(sizeof(int) * 3)))
		return (0);
	while (i < argc-1)
	{
		tab[i] = atoi(argv[i+1]);
		i++;
	}
	printf("%d", max(tab, argc-1));
	return (0);
}
