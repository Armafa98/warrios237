/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrassar <dbrassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:42:14 by dbrassar          #+#    #+#             */
/*   Updated: 2023/09/20 16:29:29 by dbrassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include<stdio.h>
	int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 92;
	b = 10;

	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d\n", div, mod);
}*/
