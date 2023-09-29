/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:47:01 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/26 13:14:51 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
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
	char	aaa[5] = "\n";
	char	bbb[5] = "YoyO";

	ft_putstr(aaa);
	if(ft_str_is_printable(aaa) == 1)
		ft_putstr(" is all printable! :)\n");
	else
		ft_putstr(" is not all printable! :(\n");

	ft_putstr(bbb);
	if(ft_str_is_printable(bbb) == 1)
		ft_putstr(" is all printable! :)\n");
	else
		ft_putstr(" is not all printable! :(\n");
	return(0);
}
*/