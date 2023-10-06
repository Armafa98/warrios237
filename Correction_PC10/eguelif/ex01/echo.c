/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:58:23 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/28 17:32:54 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	echo(void)
{
	int		retval;
	char	buffer[BUFFER_SIZE];

	retval = read(0, buffer, BUFFER_SIZE);
	while (retval > 0)
	{
		print(buffer, retval);
		retval = read(0, buffer, BUFFER_SIZE);
		if (retval == -1)
		{
			print_error();
			return (2);
		}
	}
	return (0);
}
