/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:49:45 by mhanbury          #+#    #+#             */
/*   Updated: 2023/09/25 15:05:08 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
	return ;
}

void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c < 58)
	{
		ft_putchar(c);
		++c;
	}
}
