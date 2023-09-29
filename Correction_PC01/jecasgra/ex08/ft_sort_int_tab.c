/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:03:07 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:43:17 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	buff;
	int	pos;
	int	counter;
	int	ppp;

	pos = -1;
	while (++pos < size)
	{
		ppp = pos;
		counter = pos - 1;
		while (++counter < size)
			if (tab[counter] < tab[ppp])
				ppp = counter;
		buff = tab[pos];
		tab[pos] = tab[ppp];
		tab[ppp] = buff;
	}
}

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size);
void	ft_putnbr(int nb);

int	main(void)
{
	int	tab[8];
	int	i;

	tab[0] = 55;
	tab[1] = 42;
	tab[2] = -63;
	tab[3] = 23;
	tab[4] = 78;
	tab[5] = -368;
	tab[6] = 563;
	tab[7] = -491;
	ft_sort_int_tab(tab, 8);
	i = -1;
	while (++i < 8)
		ft_putnbr(tab[i]);
}

void	ft_putnbr(int nb)
{
	int		counter;
	char	c;

	counter = 1;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb / (counter * 10) > 0 && counter < 1000000000)
		counter = counter * 10;
	while (counter > 0)
	{
		c = nb / counter + '0';
		write(1, &c, 1);
		nb -= (c - '0') * counter;
		counter /= 10;
	}
	write(1, "\n", 1);
}
