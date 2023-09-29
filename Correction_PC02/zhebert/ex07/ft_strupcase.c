/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:17:25 by zhebert           #+#    #+#             */
/*   Updated: 2023/09/27 15:26:19 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (str);
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
	ft_putchar('\n');
}

int main()
{
    char    aaa[6] = "hel;l";
    char    bbb[5] = "yeah";

    ft_putstr(aaa);
    ft_strupcase(aaa);
    ft_putstr(bbb);
    ft_strupcase(bbb);
    return(0);
}
