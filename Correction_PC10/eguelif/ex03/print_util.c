/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 08:20:24 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 13:01:44 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	print_st(t_buff *buff);
void	pr(t_buff *buff, int flag, int reval);

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	fill_buffer(t_buff *buff, int flag)
{
	int		retval;
	int		temp;

	retval = 1;
	while (retval)
	{
		retval = 16 - buff->start;
		temp = read(buff->fd, &buff->buff[buff->start], retval);
		if (temp == 0)
			break ;
		else
		{
			retval = temp;
			if (buff->start + retval == 16 && cmp(buff))
				pr(buff, flag, retval);
			else if (cmp(buff) == 0)
				print_st(buff);
			else
				return (retval);
		}
	}
	return (retval);
}

void	init_buff(char *buff)
{
	int	i;

	i = 0;
	while (i < 16)
		buff[i++] = 0;
}

void	pr(t_buff *buff, int flag, int retval)
{
	print_address(buff->count, flag, "0123456789abcdef");
	print_row(buff->buff, flag, buff->start + retval);
	ft_putchar('\n', 1);
	copy(buff->last, buff->buff);
	buff->flag = 0;
	buff->start = 0;
	buff->count += 16;
}

void	print_st(t_buff *buff)
{
	if (buff->flag != 1)
		write(1, "*\n", 2);
	buff->flag = 1;
	buff->count += 16;
}
