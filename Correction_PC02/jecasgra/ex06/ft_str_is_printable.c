/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:12:02 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 18:53:15 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < ' ' || str[i] > '~')
			return (0);
	return (1);
}

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	c;

	c = '0' + ft_str_is_printable("KGFK<>..\"SBFKG~HS&* @#!$IUBF:VSGFGAU");
	write(1, &c, 1);
}
