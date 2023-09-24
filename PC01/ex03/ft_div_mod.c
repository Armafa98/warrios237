/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:22:00 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/19 12:22:21 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
// 	a = 5;
// 	b = 4;
// 	printf("Nombre à diviser: a = %d; et b = %d\n", a, b);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Après division : div = %d; et mod = %d\n", div, mod);
// }
