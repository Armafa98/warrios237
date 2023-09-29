/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:39:56 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:41:24 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buff;
	int	pos;

	pos = -1;
	while (++pos < --size)
	{
		buff = tab[pos];
		tab[pos] = tab[size];
		tab[size] = buff;
	}
}

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_putnbr(int nb);

int	main(void)
{
	int	tab[7];
	int	i;

	tab[0] = 55;
	tab[1] = 42;
	tab[2] = -63;
	tab[3] = 23;
	tab[4] = 78;
	tab[5] = -368;
	tab[6] = 563;
	ft_rev_int_tab(tab, 7);
	i = -1;
	while (++i < 7)
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
