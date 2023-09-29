/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:49:18 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 18:43:32 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
	return (1);
}

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	c;

	c = '0' + ft_str_is_alpha("adgbbJHGSFksjgfKJSGF");
	write(1, &c, 1);
}
