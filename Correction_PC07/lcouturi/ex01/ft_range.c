/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/09/27 21:51:04 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;

	if (min >= max)
		return (0);
	range = malloc((max - min) * sizeof(int));
	index = 0;
	while (index + min != max)
	{
		range[index] = min + index;
		index++;
	}
	return (range);
}

int	main(void)
{
	const int	min = 5;
	const int	max = 22;
	int			loop;

	loop = 0;
	while (loop != max - min)
	{
		printf("%d\n", ft_range(min, max)[loop]);
		loop++;
	}
}
