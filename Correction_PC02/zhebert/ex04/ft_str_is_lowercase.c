/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:39:50 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/26 13:06:27 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


int main()
{
	char	str[6] = "Hello";

	ft_putstr(str);
	if (ft_str_is_lowercase(str) == 1)
		ft_putstr(" is all lower case\n");
	else
		ft_putstr(" is not all lowercase\n");
	return(0);
}
*/