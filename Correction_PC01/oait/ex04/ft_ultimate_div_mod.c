/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:13:31 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/21 19:13:36 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <stdio.h>

void	ft_ultimate_div_mod(int *pa, int *pb)
{
	int	memoire1;
	int	memoire2;

	memoire1 = *pa;
	memoire2 = *pb;
	if (memoire2 != 0)
	{
		*pa = memoire1 / memoire2;
		*pb = memoire1 % memoire2;
	}
}

int main()
{
    int dividend = 20;
    int divisor = 4;
    //int quotient, remainder;

    printf("Dividende : %d, Diviseur : %d\n", dividend, divisor);

    ft_ultimate_div_mod(&dividend, &divisor);

    printf("Résultat de la division : %d\n", dividend);
    printf("Résultat du modulo : %d\n", divisor);

    return 0;
}
