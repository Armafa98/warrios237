/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:24:39 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/19 16:58:03 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	valtemp;

	valtemp = *a;
	*a = *a / *b;
	*b = valtemp % *b;
}

// int	main(void)
// {
// 	int	a = 10;
// 	int	b = 7;
// 	ft_ultimate_div_mod(&a,&b);
// 	printf("div : %d; mod : %d\n", a, b);
// 	return (0);
// }
