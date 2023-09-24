/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:34:40 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/19 12:41:34 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	nbtmp;

	nbtmp = *a;
	*a = *b;
	*b = nbtmp;
}

/*int	main(void)
{
	int	w;
	int	k;

	w = 6;
	k = 2;
	printf("nombre Avant : w = %d; k = %d\n", w, k);
	ft_swap(&k, &w);
	printf("nombre Après : k = %d, w = %d", k, w);
	return (0);
}*/
