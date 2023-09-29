/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:27:04 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/26 13:15:19 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_str_is_uppercase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char	*str)
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
	char	aaa[5] = "YOOO";
	char	bbb[5] = "YoyO";

	ft_putstr(aaa);
	if(ft_str_is_uppercase(aaa) == 1)
		ft_putstr(" is all uppercase! :)\n");
	else
		ft_putstr(" is not all uppercase! :(\n");

	ft_putstr(bbb);
	if(ft_str_is_uppercase(bbb) == 1)
		ft_putstr(" is all uppercase! :)\n");
	else
		ft_putstr(" is not all uppercase! :(\n");
	return(0);
}
*/