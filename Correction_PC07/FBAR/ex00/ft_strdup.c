/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:35:38 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/05 21:21:18 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		a;
	char	*new_str;

	i = 0;
	a = 0;
	while (src[i])
		i++;
	new_str = malloc(i + 1);
	if (new_str == NULL)
		return (0);
	while (a < i)
	{
		new_str[a] = src[a];
		a++;
	}
	new_str[a] = '\0';
	return (new_str);
}

#include <stdio.h>

char	*ft_strdup(char *src);

int main(void)
{
	char str[] = "gfjjUTYGGD";
	printf("%s\n", ft_strdup(str));
}
