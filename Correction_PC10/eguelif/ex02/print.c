/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:41:46 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 09:46:19 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	print(char *str, int n, int start)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(str[start + i], 1);
		i++;
	}
}

void	print_file_name(char *str, int print)
{
	int		temp;

	temp = open(str, O_RDONLY);
	if (temp == -1)
		return ;
	close (temp);
	if (print)
	{
		ft_putchar('\n', 1);
	}
	write(1, "==> ", 4);
	while (*str)
	{
		ft_putchar(*str, 1);
		str++;
	}
	write(1, " <==\n", 5);
}

void	read_zero(void)
{
	int		retval;
	char	temp;

	retval = read(0, &temp, 1);
	while (retval)
		retval = read(0, &temp, 1);
}

int	st_din(int size)
{
	int		retval;

	retval = 0;
	if (size > 0)
		retval = read_file(0, size);
	else
		read_zero();
	return (retval);
}
