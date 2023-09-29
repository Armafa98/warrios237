/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <onilotsu@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:26:57 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/21 15:35:14 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N", 1);
	else
		write (1, "P", 1);
}

/*int main ()
{
	int x = 1;
	int y = 0;
	int z = -1;
	ft_is_negative(x);
	write(1, "\n", 1);
	ft_is_negative(y);
	write(1, "\n", 1);
	ft_is_negative(z);
}
*/
