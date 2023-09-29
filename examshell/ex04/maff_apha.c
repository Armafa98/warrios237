/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_apha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:48:44 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/28 16:41:53 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int	main(void)
// {
// 	int	i;
// 	char	c;

// 	i = 'a';
// 	while (i <= 'z')
// 	{
// 		c = i;
// 		write(1, &c, 1);
// 		i++;
// 		c = i - 32;
// 		write(1, &c, 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

int		main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'Y';
	while (a >= 'b' && b >= 'A')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a -= 2;
		b -= 2;
	}
	write(1, "\n", 1);
	return (0);
}
// maff_revalpha

int		main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a += 2;
		b += 2;
	}
	write(1, "\n", 1);
	return (0);
}

// maff_alpha
