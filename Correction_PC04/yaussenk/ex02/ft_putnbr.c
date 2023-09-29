/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:36:48 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/27 20:13:30 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rec_putnbr(int nb)
{
	int	x;

	if (nb == 0)
		return ;
	else if (nb < 0)
	{
		write(1, "-", 1);
		rec_putnbr(nb = nb * (-1));
	}
	else if (nb > 0)
	{
		rec_putnbr(nb / 10);
		x = (nb % 10) + 48;
		write(1, &x, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	rec_putnbr(nb);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2534);
	write(1, "\n", 1);
	ft_putnbr(453);
	write(1, "\n", 1);
	ft_putnbr(-1);
	write(1, "\n", 1);
	ft_putnbr(1);
}
