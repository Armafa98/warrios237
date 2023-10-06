/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:06:38 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/29 11:51:03 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_nbr(char *str)
{
	int		retval;

	retval = 0;
	while (*str >= '0' && *str <= '9')
	{
		retval *= 10;
		retval += (int)(*str - '0');
		str++;
	}
	return (retval);
}

int	ft_atoi(char *str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	while ((*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ') && *str != '\0')
		str++;
	sign = 1;
	while (*str != '\0')
	{
		if (*str == '+')
			str++;
		else if (*str == '-')
		{
			sign *= -1;
			str++;
		}
		else
			break ;
	}
	return (get_nbr(str) * sign);
}
