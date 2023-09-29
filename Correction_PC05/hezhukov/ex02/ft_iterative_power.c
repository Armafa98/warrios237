/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:15:12 by hezhukov          #+#    #+#             */
/*   Updated: 2023/09/25 19:21:16 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	i = 0;
	result = nb;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
		result *= nb;
		--power;
	}
	return (result);
}


int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 2));
	return (0);
}
