/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:54:10 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/19 17:11:07 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		e;

	e = *a;
	*a = *b;
	*b = e;
}

int	main(void)
{
	int		c;
	int		d;

	c = 42;
	d = 48;
	ft_swap(&c, &d);
	printf("%d, %d", c, d);
}
