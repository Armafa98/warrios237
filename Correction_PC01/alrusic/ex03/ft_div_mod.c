/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:54:42 by alrusisc          #+#    #+#             */
/*   Updated: 2023/09/23 19:53:17 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 100;
	b = 47;
	printf("a: %d,\nb: %d\n", a, b);
	ft_div_mod (a, b, &div, &mod);
	printf("Quotient is: %d,\nand the remainder is: %d\n", div, mod);
}
