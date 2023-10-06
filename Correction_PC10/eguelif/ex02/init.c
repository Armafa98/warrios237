/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:00:00 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/03 16:59:44 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	init(char *file)
{
	int		fd;

	fd = open(file, O_RDONLY);
	return (fd);
}

int	init_buff(char **temp, t_buffers *buff, int size)
{
	*temp = (char *) malloc(sizeof(char) * size + 1);
	buff->buff1 = (char *) malloc(sizeof(char) * size + 1);
	buff->buff2 = (char *) malloc(sizeof(char) * size + 1);
	buff->remaining1 = 1;
	buff->remaining2 = 1;
	if (!temp || !buff->buff1 || !buff->buff2)
		return (1);
	return (0);
}

void	clean(t_buffers buff, char *temp)
{
	free(buff.buff1);
	buff.buff1 = 0;
	free(buff.buff2);
	buff.buff2 = 0;
	free(temp);
	temp = 0;
}
