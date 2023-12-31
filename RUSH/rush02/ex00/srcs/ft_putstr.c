/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxpelle <maxpelle@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:37:18 by maxpelle          #+#    #+#             */
/*   Updated: 2023/09/28 17:57:35 by maxpelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(int file, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(file, &str[i], 1);
		i++;
	}
}
