/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:29:07 by armafa-p          #+#    #+#             */
/*   Updated: 2023/10/03 17:54:58 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		write(1, &av[1][i], 1);
		i++;
	}
	j++;
}