/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:37:23 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/02 17:45:24 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	print_file(int fd);	
void	app(char *file);

int	main(int argc, char **argv)
{
	if (argc == 2)
		app(argv[1]);
	else if (argc == 1)
		print_error("File name missing.");
	else if (argc > 2)
		print_error("Too many arguments.");
}

void	app(char *file)
{
	int		fd;

	fd = init(file);
	if (fd == -1)
		print_error("Cannot read file.");
	else
	{
		print_file(fd);
		close(fd);
	}
}

void	print_file(int fd)
{
	char	buff[BUFFER_SIZE];
	int		retval;

	retval = read(fd, buff, BUFFER_SIZE);
	while (retval)
	{
		if (retval == -1)
		{
			print_error("Cannot read file.");
			return ;
		}
		print(buff, retval);
		retval = read(fd, buff, BUFFER_SIZE);
	}
}
