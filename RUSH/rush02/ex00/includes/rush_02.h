/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 10:21:36 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 13:09:35 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_02_H
# define RUSH_02_H

# define INIT_BUFF_SIZE 10000
# define MAX_DICT_SIZE 100000
# define MAX_UINT 4294967295

typedef struct s_dict_value
{
	unsigned int	num;
	char			*str;
}	t_dict_value;

typedef struct s_data
{
	char			*dict_path;
	char			*num_str;
	unsigned int	num;
	unsigned int	count_entries;
	t_dict_value	**dict;
	unsigned int	index;
	unsigned int	printing;
	char			*buff;
	char			*tracker;
	int				buff_size;
	int				ret_value;
}	t_data;

void		ft_putstr(int file, char *str);
long long	ft_atoi_rush(char *str);
void		ft_free_memory(t_data *data);
void		ft_init_data(t_data *data, int argc, char *argv[]);
void		ft_init_dict(t_data *data);
void		ft_init_buffers(t_data *data);
void		get_text(t_data *data);
void		get_number(t_data *data);
void		ft_display_number(t_data *data);

#endif
