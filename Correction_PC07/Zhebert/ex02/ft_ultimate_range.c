/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:20:44 by zhebert           #+#    #+#             */
/*   Updated: 2023/10/05 17:50:20 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	i = max - min;
	result = ((int *)malloc(sizeof(int) * i));
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	size;
	int	*str;

	i = 0;
	min = 0;
	max = 20;
	size = ft_ultimate_range(&str, min, max);
	printf("%d", size);
	free (str);
	return (0);
}
*/