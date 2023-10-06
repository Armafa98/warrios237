/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:41:46 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/28 14:12:28 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	print(char *str, int n)
{
	int		i;

	i = 0;
	while (i < BUFFER_SIZE && str[i] != '\0' && i < n)
	{
		ft_putchar(str[i], 1);
		i++;
	}
}
