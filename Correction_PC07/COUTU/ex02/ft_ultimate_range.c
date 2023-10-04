/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/09/29 10:53:01 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (range == 0)
		return (0);
	index = 0;
	while (index + min != max)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (max - min);
}

int	main(void)
{
	const int	min = 3;
	const int	max = 22;
	int			loop;
	int			*rangen;

	ft_ultimate_range(&rangen, min, max);
	loop = 0;
	while (loop != max - min)
	{
		printf("%d\n", rangen[loop]);
		loop++;
	}
}
