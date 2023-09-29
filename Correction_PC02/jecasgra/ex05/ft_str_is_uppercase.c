/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecasgra <jecasgra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:04:19 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 14:59:27 by jecasgra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	return (1);
}

/*#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	c;

	c = '0' + ft_str_is_uppercase("KSGFKSBFGSKGHSIUBF:VSGASKJBFGAU");
	write(1, &c, 1);
}*/
