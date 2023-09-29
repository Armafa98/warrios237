/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_base.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrett <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:34:54 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/19 15:49:24 by fbarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	element;
	int	i;

	i = 0;
	size--;
	while (size > i)
	{
		element = tab[size];
		tab[size] = tab[i];
		tab[i] = element;
		size--;
		i++;
	}
}
/*
int	main(void)
{
	int		i;
	int		c;
	i = 0;
	int		str[] = {-1, 2, -3, 4, 5, 6, 7, 8, 1, 9, 1};
	int		str2[] = {6, -4, 5, -2, 1, 4, 7, 3, 0, 3};
	ft_rev_int_tab(&str[0], 11);
	ft_rev_int_tab(&str2[0], 10);
	while (i < 11)
	{
		if (str[i] < 0)
		{
			write(1, "-", 1);
			str[i] *= -1;
		}
		c = str[i] + 48;
		write(1, &c, 1);
		i++;
	}
}*/
