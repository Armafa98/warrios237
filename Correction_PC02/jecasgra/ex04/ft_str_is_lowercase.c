/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:58:41 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 18:50:57 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	return (1);
}

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	c;

	c = '0' + ft_str_is_lowercase("");
	write(1, &c, 1);
}
