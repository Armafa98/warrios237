/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/10/05 19:15:04 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*string;
	int		index;

	index = 0;
	while (src[index])
		index++;
	string = malloc((index + 1) * sizeof(char));
	if (string == 0)
		return (0);
	ft_strcpy(string, src);
	return (string);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ar;

	ar = malloc((sizeof(int) + 8 * 2) * (ac + 1));
	if (ar == 0)
		return (0);
	ar[ac].str = 0;
	ar[ac].copy = 0;
	ar[ac].size = 0;
	while (ac)
	{
		ar[ac - 1].str = ft_strdup(av[ac - 1]);
		ar[ac - 1].copy = ft_strdup(ar[ac - 1].str);
		ar[ac - 1].size = ft_strlen(av[ac - 1]);
		ac--;
	}
	return (ar);
}

// int	main(void)
// {
// 	char		**array;
// 	int			i;
// 	const int	size = 4;

// 	array = malloc(size * 8 + 1);
// 	array[0] = "allo";
// 	array[1] = "je";
// 	array[2] = "suis";
// 	array[3] = "Leopold";
// 	array[4] = 0;
// 	i = 0;
// 	while (ft_strs_to_tab(size, array)[i].str)
// 	{
// 		printf("index: %d\n", i);
// 		printf("size: %d\n", ft_strs_to_tab(size, array)[i].size);
// 		printf("*str: %s\n", ft_strs_to_tab(size, array)[i].str);
// 		printf("*copy: %s\n\n", ft_strs_to_tab(size, array)[i].copy);
// 		i++;
// 	}
// }
