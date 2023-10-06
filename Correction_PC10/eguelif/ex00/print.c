/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:41:46 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/02 17:45:24 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	print(char *str, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(str[i], 1);
		i++;
	}
}
