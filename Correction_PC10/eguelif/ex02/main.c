/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:37:23 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 09:46:19 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int	print_file(char *file, int ret_size, char *name);
static int	app(int size, char **files);
void		display(t_buffers buff, int size, int flag);

int	main(int argc, char **argv)
{
	int		retval;

	if (argc > 2)
	{
		retval = 0;
		retval += app(argc, argv);
	}
	else
		print_error("Bad usage: ./ft_tail -c N FILE\n");
	return (0);
}

static int	app(int size, char **files)
{
	int		i;
	int		retval;
	int		ret_size;
	int		print;

	retval = -1;
	ret_size = 10;
	ret_size = parsing(files);
	i = 3;
	print = 0;
	if (size == 3)
		retval = st_din(ret_size);
	else
	{
		while (i < size)
		{
			print_file_name(basename(files[i]), print);
			retval = print_file(files[i], ret_size, files[0]);
			if (retval == 0)
				print = 1;
			i++;
		}
	}
	return (retval);
}

static int	print_file(char *file, int ret_size, char *name)
{
	int		fd;
	int		retval;

	retval = 0;
	fd = init(file);
	if (fd == -1)
	{
		print_file_error(file, name);
		return (1);
	}
	else
	{
		retval = read_file(fd, ret_size);
		if (retval == 2)
			print_file_error(file, name);
	}
	close(fd);
	return (retval);
}

int	read_file(int fd, int size)
{
	t_buffers	buff;
	char		*temp;
	int			flag;

	init_buff(&temp, &buff, size);
	buff.remaining1 = read(fd, buff.buff1, size);
	if (buff.remaining1 < size)
	{
		print(buff.buff1, buff.remaining1, 0);
		return (0);
	}
	flag = 1;
	while ((buff.remaining1 > 0 && buff.remaining2 > 0))
	{
		if (buff.remaining1 == -1 || buff.remaining2 == -1)
			return (2);
		if (flag > 0)
			buff.remaining2 = read(fd, buff.buff2, size);
		else
			buff.remaining1 = read(fd, buff.buff1, size);
		flag *= -1;
	}
	display(buff, size, flag);
	clean(buff, temp);
	return (0);
}

void	display(t_buffers buff, int size, int flag)
{
	if (flag > 0)
	{
		print(buff.buff1, size - buff.remaining2, buff.remaining2);
		print(buff.buff2, buff.remaining2, 0);
	}
	else
	{
		print(buff.buff2, size - buff.remaining1, buff.remaining1);
		print(buff.buff1, buff.remaining1, 0);
	}
}
