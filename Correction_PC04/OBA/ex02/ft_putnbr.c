/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:44:44 by oba               #+#    #+#             */
/*   Updated: 2023/09/28 21:49:38 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ecrire(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		if (nb <= 9 && nb >= 0)
		{
			ft_ecrire (nb + 48);
		}
		if (nb >= 10)
		{
			ft_putnbr (nb / 10);
			ft_putnbr (nb % 10);
		}
	}
	if (nb < 0)
	{
		if (nb < 0)
		{
			nb = nb * (-2147483648);
			ft_ecrire('-');
			ft_putnbr(nb);
		}
	}
}
int main()
{
	ft_putnbr(1);
return (0);}
