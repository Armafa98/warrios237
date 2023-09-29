/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:21:23 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/18 18:33:14 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	O;

	O = 0;
	while (str[O] != '\0')
		O++;
	write(1, str, O);
}

int	main(void)
{
	ft_putstr("FTDM\n");
}
