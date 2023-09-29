/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkonate <dkonate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:06:07 by dkonate           #+#    #+#             */
/*   Updated: 2023/09/27 21:22:37 by dkonate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 8;
	b = 5;
	
	 ft_div_mod(a, b, &div, &mod);

	 printf("le chiffre a est = %d \n le chiffre b est =%d
	 \n la div est = %d \n le mod = %d",a,b,div,mod);
}
*/
