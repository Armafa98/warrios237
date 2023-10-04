/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 14:28:56 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 14:57:37 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_02.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_count_lines(t_data *data, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i < size - 1)
		{
			if ((data->buff)[i] == '\n' && (data->buff[i + 1] != '\n'))
				(data->count_entries)++;
		}
		else if ((data->buff)[i] == '\n')
			(data->count_entries)++;
		(data->buff_size)++;
		i++;
	}
}

void	ft_count_entries(t_data *data)
{
	int	file;
	int	read_status;

	file = open(data->dict_path, O_RDONLY);
	if (file == -1)
	{
		data->ret_value = 1;
		return ;
	}
	read_status = 1;
	data->count_entries = 0;
	data->buff_size = 0;
	while (read_status > 0)
	{
		read_status = read(file, data->buff, INIT_BUFF_SIZE);
		ft_count_lines(data, read_status);
	}
	if (data->count_entries == 0)
		data->ret_value = 1;
	close(file);
	ft_free_memory(data);
}

void	ft_parse_buffer(t_data *data)
{
	data->tracker = data->buff;
	data->index = 0;
	while (data->index < data->count_entries)
	{
		(data->dict)[data->index] = malloc(sizeof (t_dict_value));
		if (!(data->dict)[data->index])
		{
			data->ret_value = 1;
			return ;
		}
		while (*(data->tracker) == '\n')
			(data->tracker)++;
		get_number(data);
		if (data->ret_value == 0)
			get_text(data);
		if (*(data->tracker) != '\n')
			data->ret_value = 1;
		(data->tracker)++;
		(data->index)++;
		if (data->ret_value > 0)
			break ;
	}
}

void	ft_parse_dict(t_data *data)
{
	int	file;
	int	read_status;

	file = open(data->dict_path, O_RDONLY);
	if (file == -1)
	{
		data->ret_value = 1;
		return ;
	}
	ft_init_buffers(data);
	if (data->ret_value > 0)
	{
		close(file);
		return ;
	}
	read_status = read(file, data->buff, data->buff_size);
	if (read_status < 0)
	{
		close(file);
		data->ret_value = 1;
		return ;
	}
	ft_parse_buffer(data);
	close(file);
}

void	ft_init_dict(t_data *data)
{
	unsigned int	i;

	ft_count_entries(data);
	if (data->ret_value > 0 || data->buff_size > MAX_DICT_SIZE)
	{
		data->ret_value = 1;
		return ;
	}
	data->dict = malloc(sizeof (t_dict_value *) * data->count_entries);
	if (!data)
	{
		data->ret_value = 1;
		return ;
	}
	i = 0;
	while (i < data->count_entries)
	{
		data->dict[i] = (void *) 0;
		i++;
	}
	ft_parse_dict(data);
}
