/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:13:56 by maxpelle          #+#    #+#             */
/*   Updated: 2023/10/01 15:51:24 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush_02.h"

long long	ft_atoi_part(unsigned char *str)
{
	long long	retvalue;

	retvalue = 0;
	while (*str >= '0' && *str <= '9' && retvalue <= MAX_UINT)
	{
		retvalue *= 10;
		retvalue += (long long)(*str - '0');
		str++;
	}
	if (*str != '\0' || retvalue > MAX_UINT)
		return (-1);
	return (retvalue);
}

long long	ft_atoi_rush(char *str)
{
	unsigned char	*c;
	long long		op;
	long long		result;

	op = 1;
	c = (unsigned char *) str;
	while (*c != '\0' && (*c == '\t' || *c == '\n' || *c == '\v' || *c == '\f'
			|| *c == '\r' || *c == ' '))
		c++;
	while (*c != '\0')
	{
		if (*c == '+')
			c++;
		else if (*c == '-')
		{
			c++;
			op *= -1;
		}
		else
			break ;
	}
	result = ft_atoi_part(c);
	if (op == -1 || result < 0)
		return (-1);
	return (result);
}
