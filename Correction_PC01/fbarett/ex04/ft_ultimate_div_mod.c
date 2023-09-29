/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrett <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:20:47 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/17 09:51:20 by fbarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp_a;
	int		temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
/*
int	main(void)
{
	int		a;
	int		b;

	a = 1805;
	b = 42;
	ft_ultimate_div_mod(&a, &b);
}*/
