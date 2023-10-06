/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:57:49 by zhebert           #+#    #+#             */
/*   Updated: 2023/10/05 16:27:14 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
		return (0);
	i = max - min;
	result = ((int *)malloc(sizeof(int) * i));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (max >= min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
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
	size = max - min;
	str = ft_range(min, max);
	while (i <= size)
	{
		printf("%d ", str[i]);
		i++;
	}
	free(str);
	return (0);
}
*/