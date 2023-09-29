/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:34:54 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/19 17:18:06 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (*(str + i))
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	main(void)
{
	char	str[21] = "Hello World and Jack";

	ft_putstr(&str[0]);
}
