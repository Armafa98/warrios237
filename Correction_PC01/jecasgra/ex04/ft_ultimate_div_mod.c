/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:43:24 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:23:46 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putnbr(int nb);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	write(1, " ", 1);
	ft_putnbr(b);
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
}
