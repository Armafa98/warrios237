/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:49:21 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/05 21:28:23 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	calculate_size(int size, char **strs, char *sep)
{
	int	i;
	int	malloc_size;
	int	a;

	i = 0;
	malloc_size = 0;
	while (i < size)
	{
		a = 0;
		while (strs[i][a])
		{
			a++;
			malloc_size++;
		}
		i++;
	}
	a = 0;
	while (sep[a])
		a++;
	malloc_size += (a * (size - 1)) + 1;
	return (malloc_size);
}

char	*ft_conc_str(char *final_str, char **strs, char *sep, int size)
{
	int	i;
	int	a;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		a = 0;
		while (strs[i][a])
			final_str[c++] = strs[i][a++];
		a = 0;
		while (sep[a] && ((i + 1) < size))
			final_str[c++] = sep[a++];
		i++;
	}
	final_str[c] = '\0';
	return (final_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_str;

	final_str = malloc(calculate_size(size, strs, sep));
	if (final_str == NULL)
		return (0);
	if (size == 0)
	{
		final_str = malloc(1);
		return (final_str[0] = '\0');
	}
	return (ft_conc_str(final_str, strs, sep, size));
}

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	int size = 5;
	char aword[] = "hello";
	char aword2[] = "hello";
	char aword3[] = "hello";
	char aword4[] = "hello";
	char aword5[] = "hello";
	char *word_array[] = {aword, aword2, aword3, aword4, aword5};
	char sep[] = " you and ";
	printf("%s\n", ft_strjoin(size, word_array, sep));
	return (0);
}
