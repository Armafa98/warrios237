/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:00:00 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 12:39:52 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	init(t_buff *buff)
{
	int		i;

	i = 0;
	buff->start = 0;
	buff->count = 0;
	buff->track = 0;
	buff->flag = 0;
	while (i < 16)
		buff->last[i++] = '\0';
}
