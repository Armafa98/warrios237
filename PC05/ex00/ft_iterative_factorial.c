/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 22:30:42 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/24 00:30:24 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	while (nb)
	{
		result *= nb;
		nb--;
		if (nb < 0)
			return (0);
	}
	return (result);
}

int	main(void)
{
	printf("result = %d", result);
}
