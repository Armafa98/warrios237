/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:40:42 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 09:46:20 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	print_error(char *str);

void	print_file_error(char *file, char *name)
{
	char	*str;

	(void) name;
	str = strerror(errno);
	print_error(basename(name));
	print_error(": ");
	print_error(file);
	print_error(": ");
	while (*str != '\0')
	{
		ft_putchar(*str, 2);
		str++;
	}
	ft_putchar('\n', 2);
}

void	print_error(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str, 2);
		str++;
	}
}
