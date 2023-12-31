/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:26:32 by msimard           #+#    #+#             */
/*   Updated: 2023/09/29 11:35:11 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	v;

	c = argc - 1;
	while (c > 3)
	{
		v = 0;
		while (argv[c][v])
		{
			write(1, &argv[c][v], 1);
			v++;
		}
		c--;
		write(1, "\n", 1);
	}
}
