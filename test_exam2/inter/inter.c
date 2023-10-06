/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:07:31 by armafa-p          #+#    #+#             */
/*   Updated: 2023/10/05 18:50:33 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	no_dupes(char *str, int i)
{
	char	c;

	c = str[i];
	while (i != 0)
	{
		i--;
		if (str[i] == c)
			return (-1);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		while(argv[2][i2] != argv[1][i])
			i2++;
		if (argv[2][i2] == argv[1][i] && no_dupes(argv[1], i) == 1)
				write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
