/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaussenk <yaussenk@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:58:04 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/21 15:40:04 by yaussenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] >= 'A' && str[count] <= 'Z')
			|| (str[count] >= 'a' && str[count] <= 'z')) 
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
	char	str[6] = {'s', 'a', 'l', 'u', 't', '\0'};

	ft_str_is_alpha(str);
	printf("%i", ft_str_is_alpha(str));
}*/
