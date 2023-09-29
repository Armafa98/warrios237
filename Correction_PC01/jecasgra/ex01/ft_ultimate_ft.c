/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:35:26 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:07:17 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int		contenant;
	int		*contenant1;
	int		**contenant2;
	int		***contenant3;
	int		****contenant4;
	int		*****contenant5;
	int		******contenant6;
	int		*******contenant7;
	int		********contenant8;
	int		nb;
	int		counter;
	char	c;

	contenant1 = &contenant;
	contenant2 = &contenant1;
	contenant3 = &contenant2;
	contenant4 = &contenant3;
	contenant5 = &contenant4;
	contenant6 = &contenant5;
	contenant7 = &contenant6;
	contenant8 = &contenant7;
	ft_ultimate_ft(&contenant8);
	nb = ********contenant8;
	counter = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		while (nb / (counter * 10) > 0 && counter < 1000000000)
			counter = counter * 10;
		while (counter > 0)
		{
			c = nb / counter + '0';
			write(1, &c, 1);
			nb -= (c - '0') * counter;
			counter /= 10;
		}
	}
}
