/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:01:28 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/19 17:15:50 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
 #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 1805;
	b = 42;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d; mod = %d\n", div , mod);
}
