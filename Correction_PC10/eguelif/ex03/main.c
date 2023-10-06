/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:37:23 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 13:09:35 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static int	app(int size, char **files, int flag);

int	main(int argc, char **argv)
{
	int		flag;

	flag = 1;
	if (argc > 1)
	{
		if (argv[1][0] == '-')
		{
			if (argv[1][1] == 'C')
				flag = 0;
			else
				flag = -1;
		}
		if (argc == 2 && argv[1][0] == '-')
			handle_stdin(flag);
		else if (flag != -1)
			app(argc, argv, flag);
		else
			print_error("Bad usage: ./ft_hexdump -C\n");
	}
	else
		handle_stdin(flag);
	return (0);
}

static int	app(int size, char **files, int flag)
{
	print_content(flag, files, size);
	return (0);
}
