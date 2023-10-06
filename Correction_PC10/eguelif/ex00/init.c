/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:00:00 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/28 08:20:52 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int	init(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	return (fd);
}