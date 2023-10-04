/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:37:48 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 15:06:33 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_02.h"
#include <stdlib.h>

void	ft_fill_buffers(t_data *data)
{
	int	i;

	i = -1;
	while (++i < (data->buff_size))
		data->buff[i] = '\0';
}

void	ft_init_buffers(t_data *data)
{
	data->buff = malloc(sizeof (char) * (data->buff_size));
	if (!data->buff)
		data->ret_value = 1;
	return ;
}

void	ft_check_args(t_data *data, int argc, char *argv[])
{
	if (argc > 3 || argc == 1)
	{
		data->ret_value = 1;
		return ;
	}
	if (argc == 2)
	{
		data->dict_path = "./static/numbers.dict";
		data->num_str = argv[1];
	}
	else
	{
		data->dict_path = argv[1];
		data->num_str = argv[2];
	}
}

void	ft_init_data(t_data *data, int argc, char *argv[])
{
	long long	tmp;

	data->ret_value = 0;
	ft_check_args(data, argc, argv);
	if (data->ret_value > 0)
		return ;
	tmp = ft_atoi_rush(data->num_str);
	if (tmp < 0)
	{
		data->ret_value = 1;
		return ;
	}
	data->num = (unsigned int) tmp;
	data->buff_size = INIT_BUFF_SIZE;
	ft_init_buffers(data);
	if (data->ret_value > 0)
		return ;
	ft_fill_buffers(data);
	data->dict = (void *) 0;
}

void	ft_free_memory(t_data *data)
{
	unsigned int	i;

	data->index = 0;
	i = -1;
	if (data->dict)
	{
		while (++i < data->count_entries)
		{
			if ((data->dict)[i])
			{
				if ((data->dict)[i]->str)
					free((data->dict)[i]->str);
				(data->dict)[i]->str = (void *) 0;
				free((data->dict)[i]);
				(data->dict)[i] = (void *) 0;
			}
		}
		free(data->dict);
		data->dict = (void *) 0;
	}
	if (data->buff)
	{
		free(data->buff);
		data->buff = (void *) 0;
	}
}
