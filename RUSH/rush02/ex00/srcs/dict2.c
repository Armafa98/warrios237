/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:34:40 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 15:23:17 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_02.h"
#include <stdlib.h>

unsigned int	ft_atoi_dict(char *str)
{
	long long	num;

	num = ft_atoi_rush(str);
	if (num < 0)
		num = MAX_UINT;
	return ((unsigned int) num);
}

void	get_number(t_data *data)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	if (!(*(data->tracker) >= '0' && *(data->tracker) <= '9'))
	{
		data->ret_value = 1;
		return ;
	}
	while ((data->tracker)[len] >= '0' && (data->tracker)[len] <= '9')
		len++;
	str = malloc(sizeof (char) * len);
	if (!str)
	{
		data->ret_value = 1;
		return ;
	}
	i = -1;
	while (++i < len)
		str[i] = *((data->tracker)++);
	(data->dict)[data->index]->num = ft_atoi_dict(str);
	free(str);
}

void	get_text_next(t_data *data, int len)
{
	int	i;

	(data->dict)[data->index]->str = malloc(sizeof (char) * (len + 1));
	if (!((data->dict)[data->index]->str))
	{
		data->ret_value = 1;
		return ;
	}
	i = 0;
	while (i < len)
	{
		(data->dict)[data->index]->str[i] = *(data->tracker);
		(data->tracker)++;
		i++;
	}
	(data->dict)[data->index]->str[i] = '\0';
	while (*(data->tracker) == ' ')
		(data->tracker)++;
}

void	get_text(t_data *data)
{
	int		len;

	while (*(data->tracker) != ':')
	{
		if (*(data->tracker) != ' ')
		{
			data->ret_value = 1;
			return ;
		}
		(data->tracker++);
	}
	(data->tracker)++;
	while (*(data->tracker) == ' ')
		(data->tracker)++;
	len = 0;
	while ((data->tracker)[len] >= 32 && (data->tracker)[len] <= 126)
		len++;
	len--;
	while ((data->tracker)[len] == ' ')
		len--;
	len++;
	get_text_next(data, len);
}
