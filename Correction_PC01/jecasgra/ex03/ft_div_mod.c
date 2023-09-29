/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:22:35 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:16:58 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

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

int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(42, 13, &div, &mod);
	ft_putnbr(div);
	write(1, " ", 1);
	ft_putnbr(mod);
}
