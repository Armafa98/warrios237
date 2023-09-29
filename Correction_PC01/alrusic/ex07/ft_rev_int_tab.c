/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:15:07 by alrusisc          #+#    #+#             */
/*   Updated: 2023/09/23 20:00:55 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size = size - 1;
	temp = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

int	main(void)
{
	int str[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size;
	int i;

	size = 10;
	i = 0;
	ft_rev_int_tab(str, size);
		while (i < size)
		{
			printf ("%d", str[i]);
			i++;
		}
	return (0);
}
