/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 10:34:27 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 13:32:08 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_02.h"

void	ft_print_to_str(t_data *data, char *str)
{
	while (*str)
	{
		*(data->tracker) = *str;
		(data->tracker)++;
		str++;
	}
}

void	ft_print_number(t_data *data, unsigned int value)
{
	unsigned int	i;

	i = 0;
	while (i < data->count_entries)
	{
		if ((data->dict)[i]->num == value)
		{
			if (data->printing == 1)
				ft_print_to_str(data, " ");
			else
				data->printing = 1;
			ft_print_to_str(data, (data->dict)[i]->str);
			break ;
		}
		i++;
	}
	if (i == data->count_entries)
		data->ret_value = 1;
}

void	ft_print_hundreds(t_data *data, unsigned int value)
{
	if (value / 100 > 0)
	{
		ft_print_number(data, value / 100);
		ft_print_number(data, 100);
	}
	if (value % 100 > 20)
	{
		value = value % 100;
		ft_print_number(data, (value / 10) * 10);
		if (value % 10 > 0)
			ft_print_number(data, value % 10);
	}
	else if (value % 100 > 0)
	{
		ft_print_number(data, value % 100);
	}
}

void	ft_print_value(t_data *data, unsigned int value)
{
	if (value == 0)
		ft_print_number(data, 0);
	else
	{
		if (value >= 1000000000)
		{
			ft_print_hundreds(data, value / 1000000000);
			ft_print_number(data, 1000000000);
			value = value % 1000000000;
		}
		if (value >= 1000000)
		{
			ft_print_hundreds(data, value / 1000000);
			ft_print_number(data, 1000000);
			value = value % 1000000;
		}
		if (value >= 1000)
		{
			ft_print_hundreds(data, value / 1000);
			ft_print_number(data, 1000);
			value = value % 1000;
		}
		ft_print_hundreds(data, value);
	}
	*(data->tracker) = '\0';
}

void	ft_display_number(t_data *data)
{
	unsigned int	value;

	data->tracker = data->buff;
	data->printing = 0;
	value = data->num;
	ft_print_value(data, data->num);
	if (data->ret_value > 0)
		return ;
	ft_putstr(1, data->buff);
	ft_putstr(1, "\n");
}
