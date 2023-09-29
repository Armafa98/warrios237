/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:34:54 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/19 17:37:23 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		max_nbr;
	int		i;
	int		max_location;

	while (size > 0)
	{
		max_nbr = tab[0];
		i = 0;
		max_location = 0;
		while (i < size)
		{
			if (tab[i] > max_nbr)
			{
				max_location = i;
				max_nbr = tab[i];
			}
			i++;
		}
		tab[max_location] = tab[size - 1];
		tab[size - 1] = max_nbr;
		size--;
	}
}

int	main(void)
{
	int		b = 12;
	int		str[13] = {0, 45, 2, 87, 4, 13, 6, 1, 8, 122, 10, 34};
	ft_sort_int_tab(&str[0], 12);
	int		c = 12;
	int		tbl[13] = {6543, 5436, 1232, 6576, 34, 101, 3455, 4, 67, 1234, 9078, 2};
	ft_sort_int_tab(&tbl[0], 12);
	printf("%ld; %ld\n", str, tbl);
}
