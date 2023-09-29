/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <onilotsu@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:33:21 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/21 15:35:20 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int z);

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	while (x <= 57)
	{
		y = x + 1;
		while (y != z && y <= 57)
		{
			z = y + 1;
			while (z <= 57 && z > 48)
			{
				ft_putchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}

void	ft_putchar(int x, int y, int z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x++ != 55)
		write (1, ", ", 2);
}
// int main()
// {
// 		ft_print_comb();
// }
