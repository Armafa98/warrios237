/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:37:23 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/03 08:20:36 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

static int	read_file(int fd);
static int	print_file(char *file, char *name);	
static int	app(int size, char **files);

int	main(int argc, char **argv)
{
	int		retval;

	retval = 0;
	if (argc >= 2)
		retval += app(argc, argv);
	else if (argc == 1)
		retval = echo();
	if (retval > 0)
		return (1);
	return (0);
}

static int	app(int size, char **files)
{
	int		i;
	int		retval;

	i = 1;
	retval = 0;
	while (i < size)
	{
		retval += print_file(files[i], files[0]);
		i++;
	}
	return (retval);
}

static int	print_file(char *file, char *name)
{
	int		fd;
	int		retval;

	retval = 0;
	if (file[0] == '-')
	{
		retval = echo();
		return (retval);
	}
	fd = init(file);
	if (fd == -1)
	{
		print_file_error(file, name);
		return (1);
	}
	else
	{
		retval = read_file(fd);
		if (retval == 2)
			print_file_error(file, name);
	}
	return (retval);
}

static int	read_file(int fd)
{
	char	buff[BUFFER_SIZE];
	int		retval;

	init_buff(buff);
	retval = read(fd, buff, BUFFER_SIZE);
	while (retval)
	{
		if (retval == -1)
			return (2);
		print(buff, retval);
		retval = read(fd, buff, BUFFER_SIZE);
	}
	close(fd);
	return (0);
}
