/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <onilotsu@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:21:40 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/19 13:45:10 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	x;

	x = 'z';
	while (x <= 'z' && x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}
/*int main ()
  {
  	ft_print_reverse_alphabet();
  }

*/
