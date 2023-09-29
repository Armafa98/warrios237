/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaussenk <yaussenk@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:44:41 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/21 17:03:41 by yaussenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main(void)
{
	char	str[12] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '!'};

	ft_str_is_numeric(str);
	printf("%i", ft_str_is_numeric(str));
}*/
