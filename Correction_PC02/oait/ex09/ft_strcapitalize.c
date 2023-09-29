/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:46:19 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/25 12:46:29 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_char_is_alpha(char *str, int i)
{
	if (str[i] != '\0' && ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	debutmot(char *str, int i)
{
	if (i == 0 || ft_char_is_alpha(str, i - 1) == 0)
		return (1);
	else
		return (0);
}

int	changeminmag(char *str, int i)
{
	if (str[i] >= 97 && str[i] <= 122)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (debutmot(str, i) == 1)
		{
			if (ft_char_is_alpha(str, i) == 1)
			{
				if (changeminmag(str, i) == 1 && str[i] >= 97 && str[i] <= 122)
				{
					str[i] -= 32;
				}
			}
			else
			{
				if (changeminmag(str, i) == 0 && str[i] >= 65 && str[i] <= 90)
				{
					str[i] += 32;
				}
			}
		}
		i++;
	}
	return (str);
}

int main ()
{
    char tableau[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(tableau);
    puts(tableau);
    return (0);
}
