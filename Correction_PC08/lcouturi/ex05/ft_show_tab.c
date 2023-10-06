/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/10/05 19:14:04 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	char		nbc;
	int			divisor;
	int			start;
	long int	nb2;

	nb2 = nb;
	start = 0;
	divisor = 1000000000;
	if (nb2 < 0)
	{
		write (1, "-", 1);
		nb2 *= -1;
	}
	while (divisor >= 1 && nb != 0)
	{
		nbc = nb2 / divisor % 10 + 48;
		divisor /= 10;
		if (nbc != '0')
			start = 1;
		if (start == 1)
			write (1, &nbc, 1);
	}
	if (nb == 0)
		write (1, "0", 1);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	write(1, str, index);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	char		**array;
	int			i;
	const int	size = 4;

	array = malloc(size * 8 + 1);
	array[0] = "allo";
	array[1] = "je";
	array[2] = "suis";
	array[3] = "Leopold";
	array[4] = 0;
	i = 0;
	ft_show_tab(ft_strs_to_tab(size, array));
}
