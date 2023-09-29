/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhebert <zhebert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:38:59 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/27 11:58:21 by zhebert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (str);
}
/*
void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
    ft_putchar('\n');
}

int main()
{
    char    aaa[6] = "HeL;l";
    char    bbb[5] = "YEAH";

    ft_putstr(aaa);
    ft_strlowcase(aaa);
    ft_putstr(bbb);
    ft_strlowcase(bbb);
    return(0);
}
*/