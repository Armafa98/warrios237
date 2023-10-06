/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_row_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 07:31:07 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 10:13:32 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static void	print_char(char *content, int size);
static void	print_row_hexa_noc(char *content, int size);
static void	print_row_hexa_c(char *content, int size);
static int	is_non_printable(char c);

void	print_row(char *content, int flag, int size)
{
	if (flag == 0)
	{
		print_row_hexa_c(content, size);
		print_char(content, size);
	}
	else
		print_row_hexa_noc(content, size);
}

static void	print_row_hexa_noc(char *content, int size)
{
	int		i;

	ft_putchar(' ', 1);
	i = 0;
	while (i < size)
	{
		print_hexa(content[i], "0123456789abcdef");
		if (i != size - 1)
			ft_putchar(' ', 1);
		i++;
	}
	while (i < 16)
	{
		print_double_space();
		ft_putchar(' ', 1);
		i++;
	}
}

static void	print_row_hexa_c(char *content, int size)
{
	int		i;

	print_double_space();
	i = 0;
	while (i < size)
	{
		print_hexa(content[i], "0123456789abcdef");
		if (i == 7)
			print_double_space();
		else
			if (i != size - 1)
				ft_putchar(' ', 1);
		i++;
	}
	while (i < 16)
	{
		print_double_space();
		if (i != 7)
			ft_putchar(' ', 1);
		else
			print_double_space();
		i++;
	}
	ft_putchar(' ', 1);
	ft_putchar(' ', 1);
}

static void	print_char(char *content, int size)
{
	int		i;

	ft_putchar('|', 1);
	i = 0;
	while (i < size)
	{
		if (is_non_printable(content[i]))
			ft_putchar('.', 1);
		else
			ft_putchar(content[i], 1);
		i++;
	}
	ft_putchar('|', 1);
}

static int	is_non_printable(char c)
{
	return (c < 32 || c == 127);
}
