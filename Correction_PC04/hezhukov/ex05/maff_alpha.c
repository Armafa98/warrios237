/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:17:51 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/24 13:18:22 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(char c)
{
	int	x;

	x = 'a';
	while (x <= 'z')
	{
		c = x;
		write(1, &c, 1);
		x++;
		c = x - 32;
		write(1, &c, 1);
		x++;
	}
}

int	main(void)
{	int	x;
	char	c;

	x = 'a';
	c = x;
	maff_alpha(c);
	return (0);
}


// int	main(void)
// {
// 	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
// 	return (0);
// }
