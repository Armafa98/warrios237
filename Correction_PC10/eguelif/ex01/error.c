/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:40:42 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/03 10:54:02 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

static int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print_file_error(char *file, char *name)
{
	char	*str;

	str = strerror(errno);
	print(basename(name), ft_strlen(name));
	print(": ", 2);
	print(file, ft_strlen(file));
	print(": ", 2);
	while (*str != '\0')
	{
		ft_putchar(*str, 2);
		str++;
	}
	ft_putchar('\n', 1);
}

void	print_error(void)
{
	char	*str;

	str = strerror(errno);
	while (*str != '\0')
	{
		ft_putchar(*str, 2);
		str++;
	}
	ft_putchar('\n', 1);
}
