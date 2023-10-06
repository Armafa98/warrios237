/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:24:09 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/05 21:22:33 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (0);
	array = malloc((max - min) * 4);
	if (array == NULL)
		return (0);
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

#include <stdio.h>

int	*ft_range(int min, int max);

int main(void)
{
	int *array = ft_range(5, 10);
	int i = 0;
	if (array == 0)
		printf("nothing");
	else
	{
		while (array[i])
		{
			printf("%d\n", array[i]);
			i++;
		}
	}
}
