/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecasgra <jecasgra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:06:06 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 14:58:24 by jecasgra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}

/*#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	c;

	c = '0' + ft_str_is_numeric("0346591696710671a738606719369");
	write(1, &c, 1);
}*/
