/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:24:09 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/05 21:24:29 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = (max - min);
	*range = malloc(size * 4);
	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	if (size > 0)
		return (size);
	return (-1);
}

#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int i;
	int *ptr;
	i = ft_ultimate_range(&ptr, 5, 20);
	printf("%d\n", i);
	i = 0;
	while (ptr[i])
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	return (0);
}
