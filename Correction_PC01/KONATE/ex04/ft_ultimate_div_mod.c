/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:23:14 by dkonate           #+#    #+#             */
/*   Updated: 2023/09/27 22:44:18 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;   // temp = *a;
	*b = *a % *b;     // *a = *a / *b;
	*a = temp;         // *b = temp % *b;
}

#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 7;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("le chiffre a est = %d\nle chiffre b est = %d",a,b);
}
