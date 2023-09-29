/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrassar <dbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:59:27 by dbrassar          #+#    #+#             */
/*   Updated: 2023/09/20 16:27:45 by dbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>
int	main(void)
{
	int a;
	int b;

	a = 42;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}*/
