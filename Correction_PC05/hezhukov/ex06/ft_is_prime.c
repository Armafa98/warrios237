/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:11:24 by hezhukov          #+#    #+#             */
/*   Updated: 2023/09/25 19:21:47 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	while (nb % i++ != 0)
	{
		if (nb == i)
		{
			return (1);
		}
	}
	return (0);
}

int	main(void)
{
	int	i;

	i = 15;
	printf("%d\n", ft_is_prime(i));
	return (0);
}
