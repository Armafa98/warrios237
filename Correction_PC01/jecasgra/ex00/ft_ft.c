/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:27:09 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:04:15 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_ft(int *nbr);

int	main(void)
{
	int		contenant;
	int		counter;
	char	c;

	ft_ft(&contenant);
	counter = 1;
	if (contenant == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (contenant < 0)
		{
			if (contenant == -2147483648)
				write(1, "-2147483648", 11);
			write(1, "-", 1);
			contenant *= -1;
		}
		while (contenant / (counter * 10) > 0 && counter < 1000000000)
			counter = counter * 10;
		while (counter > 0)
		{
			c = contenant / counter + '0';
			write(1, &c, 1);
			contenant -= (c - '0') * counter;
			counter /= 10;
		}
	}
}
