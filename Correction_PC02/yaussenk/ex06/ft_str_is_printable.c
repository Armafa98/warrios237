/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaussenk <yaussenk@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:42:27 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/21 19:12:38 by yaussenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= ' ' && str[count] <= '~')
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
	char str[6] = {'9', '+', ',', '~', ' '};
	ft_str_is_printable(str);
	printf("%i", ft_str_is_printable(str));
}*/
