/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_pr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:56:44 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 12:59:27 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	print_last(t_buff buff, int flag, int retval)
{
	if (retval < 16)
	{
		print_address(buff.count, flag, "0123456789abcdefg");
		print_row(buff.buff, flag, retval);
		ft_putchar('\n', 1);
		print_address(buff.count + retval, flag, "0123456789abcdefg");
		ft_putchar('\n', 1);
	}
	else
	{
		print_address(buff.count, flag, "0123456789abcdefg");
		ft_putchar('\n', 1);
	}
}
