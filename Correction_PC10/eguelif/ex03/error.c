/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:40:42 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 12:37:47 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	print_file_error(char *file, char *name)
{
	char	*str;

	str = strerror(errno);
	write(2, basename(name), ft_strlen(basename(name)));
	(void) name;
	write(2, ": ", 2);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	while (*str != '\0')
	{
		ft_putchar(*str, 2);
		str++;
	}
	ft_putchar('\n', 2);
}

void	print_error(char *str)
{
	while (*str)
		ft_putchar(*str, 2);
	ft_putchar('\n', 2);
}

void	print_str_error(char *file, char *name, char *str)
{
	write(2, basename(name), ft_strlen(basename(name)));
	write(2, ": ", 2);
	write(2, file, ft_strlen(file));
	write(2, ": ", 2);
	while (*str != '\0')
	{
		ft_putchar(*str, 2);
		str++;
	}
	ft_putchar('\n', 2);
}
