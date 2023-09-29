/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:21:04 by oba               #+#    #+#             */
/*   Updated: 2023/09/27 23:04:52 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (*to_find == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (to_find[y] == str[x + y])
		{
			if (to_find[y + 1] == '\0')
			{
				return (str + x);
			}
			y++;
		}
		x++;
	}
	return (0);
}

int main(void)
{
char a[] = "ombre finne dans la nuit , c'est un assassin qui s'enfuie";
char b[] = "ass";
char *res;

res = ft_strstr(a,b);

printf("la phrase est :%s",res);
}
