/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:47:48 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/16 11:10:07 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test(void)
{
	char	x, y, z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1,&z, 1);
				write(1,", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	test();
	return (0);
}