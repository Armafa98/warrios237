/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:57:14 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/23 23:41:10 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printmin(void)
{
	write (1, "-", 1);
	write (1, "2", 1);
	write (1, "1", 1);
	write (1, "4", 1);
	write (1, "7", 1);
	write (1, "4", 1);
	write (1, "8", 1);
	write (1, "3", 1);
	write (1, "6", 1);
	write (1, "4", 1);
	write (1, "8", 1);
}

int	iffonction(int a)
{
	int	k;

	if (a < 0)
	{
		k = -a;
		write (1, "-", 1);
	}
	else
	{
		k = a;
	}
	return (k);
}

void	ft_putnbr(int a)
{
	int	b;
	int	c;

	if (a > -2147483648 && a <= 2147483647)
	{
		c = iffonction(a);
		if (c > 9)
		{
			b = c / 10;
			ft_putnbr (b);
			c = c % 10;
		}
		c = c + '0';
		write (1, &c, 1);
	}
	if (a == -2147483648)
	{
		printmin();
	}
}

int	main()
{
	int nb = -2147483648;
    int b = 2147483647;
	 ft_putnbr(nb);
     ft_putnbr(b);
	return (0);
}
