/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 06:19:55 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 13:09:34 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	handle_stdin(int flag)
{
	int		retval;
	t_buff	buff;

	init(&buff);
	buff.fd = 0;
	retval = fill_buffer(&buff, flag);
	print_last(buff, flag, retval);
}
