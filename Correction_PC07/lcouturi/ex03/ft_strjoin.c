/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/09/27 21:57:26 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (dest[index])
		index++;
	while (src[index2])
	{
		dest[index] = src[index2];
		index++;
		index2++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*returned;
	int		total_length;
	int		size2;

	size2 = size;
	total_length = 0;
	if (size == 0)
		return ("");
	while (size2)
	{
		size2--;
		total_length += ft_strlen(strs[size2]);
		if (size2 != 0)
			total_length += ft_strlen(sep);
	}
	returned = malloc(total_length + 1);
	while (size2 < size)
	{
		ft_strcat(returned, strs[size2]);
		size2++;
		if (size2 != size)
			ft_strcat(returned, sep);
	}
	return (returned);
}

int	main(void)
{
	char	**strs = malloc(23);

	strs[0] = "hi guys";
	strs[1] = "it me mario";
	strs[2] = "wahoo";
	printf("%s\n", ft_strjoin(3, strs, " _ "));
}
