/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkonate <dkonate@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:58:02 by dkonate           #+#    #+#             */
/*   Updated: 2023/09/27 21:09:02 by dkonate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	printf("Avant l'échange : a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Après l'échange : a = %d, b = %d\n", a, b);
}
*/