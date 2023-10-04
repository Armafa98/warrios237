/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:23:22 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 13:19:36 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/rush_02.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	t_data			data;

	ft_init_data(&data, argc, argv);
	if (data.ret_value > 0)
	{
		write(2, "Error\n", 6); 
		ft_free_memory(&data);
		return (data.ret_value);
	}
	ft_init_dict(&data);
	if (data.ret_value > 0)
	{
		write(2, "Dict Error\n", 11); 
		ft_free_memory(&data);
		return (data.ret_value);
	}
	ft_display_number(&data);
	if (data.ret_value > 0)
		write(2, "Dict Error\n", 11); 
	ft_free_memory(&data);
	return (data.ret_value);
}
