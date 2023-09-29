/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:06:10 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/25 15:40:39 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	big_number(int nb)
{
	if (nb == 0)
		return ;
	big_number(nb / 10);
	nb = nb % 10 + 48;
	write (1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 10)
		big_number(nb);
	else
	{
		nb = nb % 10 + 48;
		write (1, &nb, 1);
	}
}
int main()
{
	int x = 0;
	while (x < 10)
	{
		ft_putnbr(x);
		x++;
	}
	write (1, "\n", 1);
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(-42);
	write (1, "\n", 1);
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
}
