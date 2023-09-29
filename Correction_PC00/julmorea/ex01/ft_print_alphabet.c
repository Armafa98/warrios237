/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <onilotsu@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:05:21 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/14 18:33:23 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	x;

	x = 'a';
	while (x >= 'a' && x <= 'z' )
	{
		write(1, &x, 1);
		x++;
	}
}
/*
 int main()
 {
 	ft_print_alphabet();
 }
 */
