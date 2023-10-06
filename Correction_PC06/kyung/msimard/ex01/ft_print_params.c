/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:26:47 by msimard           #+#    #+#             */
/*   Updated: 2023/09/29 11:33:55 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	v;
	int	c;

	(void)argc;
	c = 1;
	while (argv[c])
	{
		v = 0;
		while (argv[c][v])
		{
			write(1, &argv[c][v], 1);
			v++;
		}
		c++;
		write(1, "\n", 1);
	}
}
