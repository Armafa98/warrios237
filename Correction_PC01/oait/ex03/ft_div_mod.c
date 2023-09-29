/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:11:41 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/21 19:11:44 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//# include <stdio.h>

void	ft_div_mod(int a, int b, int *dive, int *mode)
{
	*dive = a / b;
	*mode = a % b;
}
/*
int main()
{
    int dividend = 20;
    int divisor = 4;
    int quotient, remainder;

    printf("Dividende : %d, Diviseur : %d\n", dividend, divisor);

    ft_div_mod(dividend, divisor, &quotient, &remainder);

    printf("Résultat de la division : %d\n", quotient);
    printf("Résultat du modulo : %d\n", remainder);

    return 0;
}*/
