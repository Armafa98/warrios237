/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanbury <mhanbury@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:13:08 by mhanbury          #+#    #+#             */
/*   Updated: 2023/09/21 15:34:20 by mhanbury         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char c, char d, char u)
{
	ft_putchar(c + '0');
	ft_putchar(d + '0');
	ft_putchar(u + '0');
	if (c == 7 && d == 8 && u == 9)
	{
		return ;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)

{
	int	c;
	int	d;
	int	u;

	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				ft_print(c, d, u);
				++u;
			}
			++d;
		}
		++c;
	}
}
