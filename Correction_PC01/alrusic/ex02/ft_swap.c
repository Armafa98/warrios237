/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrusisc <alrusisc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:18:15 by alrusisc          #+#    #+#             */
/*   Updated: 2023/09/23 18:23:22 by alrusisc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 50;
	printf("%d\n%d\n", a, b);
	ft_swap (&a, &b);
	printf("After swap \n%d\n%d\n", a, b);
	return (0);
}
*/