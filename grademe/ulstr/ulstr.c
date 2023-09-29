/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 23:30:33 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/28 23:30:55 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		index;

	index = 0;
	if (ac == 2)
	{
		while (av[1][index] != '\0')
		{
			if (av[1][index] >= 'A' && av[1][index] <= 'Z')
				ft_putchar(av[1][index] - 'A' + 'a');
			else if (av[1][index] >= 'a' && av[1][index] <= 'z')
				ft_putchar(av[1][index] - 'a' + 'A');
			else
				ft_putchar(av[1][index]);
			index++;
		}
	}
	ft_putchar('\n');
	return (0);
}
