/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusisc <alrusisc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:22:30 by alrusisc          #+#    #+#             */
/*   Updated: 2023/09/23 18:27:09 by alrusisc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 100;
	b = 47;
	printf("a: %d,\nb: %d\n", a, b);
	ft_ultimate_div_mod (&a, &b);
	printf("Quotient is: %d, and the remainder is: %d ", a, b);
}
*/