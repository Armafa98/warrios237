/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezhukov <hezhukov@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:11:45 by hezhukov          #+#    #+#             */
/*   Updated: 2023/09/25 19:21:42 by hezhukov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb / i)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}


int	main(void)
{
	int	i;

	i = 0;
	printf("%d\n", ft_sqrt(i));
	return (0);
}
