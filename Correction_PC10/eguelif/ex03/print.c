/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:41:46 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 13:09:36 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	print_content(int flag, char **files, int nbr)
{
	int		i;
	t_buff	buff;
	int		retval;

	i = 0;
	init(&buff);
	i = 0;
	if (flag == 0)
		i = 1;
	while (++i < nbr)
	{
		buff.fd = open(files[i], O_RDONLY);
		if (buff.fd == -1)
			print_file_error(files[i], files[0]);
		else
		{
			retval = fill_buffer(&buff, flag);
			buff.start = retval;
			close(buff.fd);
		}
	}
	print_last(buff, flag, retval);
}

void	print_address(int add, int flag, char *base)
{
	int		i;
	char	nbr[8];

	i = 0;
	while (i < 8)
	{
		nbr[i] = '0';
		i++;
	}
	i = 7;
	while (add != 0)
	{
		nbr[i] = base[add % 16];
		add /= 16;
		i--;
	}
	i = flag;
	while (i < 8)
		ft_putchar(nbr[i++], 1);
}

void	print(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i])
		ft_putchar(str[i], c);
}

void	print_hexa(char a, char *base)
{
	ft_putchar(base[(unsigned char) a / 16], 1);
	ft_putchar(base[(unsigned char) a % 16], 1);
}
