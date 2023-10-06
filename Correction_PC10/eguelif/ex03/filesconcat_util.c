/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filesconcat_util.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:41:53 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 12:37:45 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	count_file(int fd)
{
	int		counter;
	int		retval;
	char	c;

	counter = 0;
	counter++;
	retval = read(fd, &c, 1);
	while (retval)
	{
		retval = read(fd, &c, 1);
		if (retval != 0)
			counter++;
	}
	return (counter);
}

void	copy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		s1[i] = s2[i];
		i++;
	}
}

int	cmp(t_buff *buff)
{
	int		i;

	i = 0;
	if (buff->count == 0)
		return (1);
	while (buff->buff[i] == buff->last[i] && i < 16)
		i++;
	if (i < 16)
		return (buff->buff[i] - buff->last[i]);
	return (buff->buff[i - 1] - buff->last[i - 1]);
}
