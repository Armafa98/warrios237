/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:18:05 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/23 19:34:15 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}


// int main()
// {
// 	int num = 42;
// 	ft_putnbr(num);
// 	write(1, "\n", 1);

// 	int negative_num = -123;
// 	ft_putnbr(negative_num);
// 	write(1, "\n", 1);
// 	return 0;
// }
