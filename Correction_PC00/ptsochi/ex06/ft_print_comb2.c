/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:25:37 by ptsochi-          #+#    #+#             */
/*   Updated: 2023/09/28 22:26:59 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(char *array, int a, int b)
{
	array[0] = a / 10 + 48;
	array[1] = a % 10 + 48;
	array[2] = ' ';
	array[3] = b / 10 + 48;
	array[4] = b % 10 + 48;
	if (b > 1)
	{
		write (1, ", ", 2);
	}
	write (1, array, 5);
}

void	ft_print_comb2(void)
{
	char	array[5];
	int		a;
	int		b;

	a = 0;
	b = 1;
	while (a < 99)
	{
		while (b < 100)
		{
			ft_putstring(array, a, b);
			b++;
		}
		a++;
		b = a + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
