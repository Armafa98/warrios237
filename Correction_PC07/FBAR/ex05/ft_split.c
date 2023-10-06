/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:39:18 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/05 21:32:19 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_str(char *str, char *charset, int i)
{
	int	str_nbr;
	int	is_sep;

	str_nbr = 0;
	is_sep = 0;
	while (str[i])
	{
		if (check_charset(str[i], charset))
		{
			if (is_sep)
				str_nbr++;
			is_sep = 0;
		}
		else
		{
			if (!str[i + 1])
				str_nbr++;
			is_sep = 1;
		}
		i++;
	}
	return (str_nbr);
}

int	calc_malloc(char *str, char *charset, int i)
{
	int	a;

	a = 0;
	while (str[a] && !check_charset(str[i + a], charset))
		a++;
	a++;
	return (a);
}

int	is_sep(int b, int c, char **final_array)
{
	if (b != 0)
		final_array[c][b] = '\0';
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		c;
	int		b;
	char	**final_array;

	i = 0;
	c = -1;
	b = 0;
	final_array = malloc((count_str(str, charset, i) + 1) * 8);
	while (str[i])
	{
		if (check_charset(str[i], charset))
			b = is_sep(b, c, final_array);
		else
		{
			if (b == 0)
				final_array[++c] = malloc(calc_malloc(str, charset, i));
			final_array[c][b++] = str[i];
			if (!str[i + 1])
				final_array[c][b] = '\0';
		}
		i++;
	}
	final_array[c + 1] = 0;
	return (final_array);
}


#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main(void)
{
	int i;

	i = 0;
	char str[] = "gafhrjjjda";
	char str2[] = "gfd";
	char **str3;
	str3 = ft_split(str, str2);

	while (str3[i])
	{
		printf("%s\n", str3[i]);
		i++;
	}
}
