/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 12:09:01 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/16 15:47:12 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x)
{
	int	nb;

	nb = 1;
	while (nb <= x)
	{
		if (nb != 1 && nb < x)
			ft_putchar('B');
		else if (nb == 1)
			ft_putchar('A');
		if (x > 1 && nb == x)
			ft_putchar('C');
		nb++;
	}
	ft_putchar('\n');
}

void	vlines(int x, int y)
{
	int	nb;

	while (y > 2)
	{
		nb = 1;
		y--;
		while (nb <= x)
		{
			if (nb == x || nb == 1)
				ft_putchar('B');
			else if (nb < x && nb != 1)
				ft_putchar(' ');
			nb++;
		}
		ft_putchar('\n');
	}
	if (y == 2)
		firstline(x);
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	firstline(x);
	if (y >= 2)
		vlines(x, y);
}
