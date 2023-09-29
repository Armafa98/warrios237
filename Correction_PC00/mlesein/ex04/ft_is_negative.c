/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:42:42 by mlesein           #+#    #+#             */
/*   Updated: 2023/09/18 17:45:58 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	var;

	if (n < 0)
	{
		var = 'N';
	}
	else
	{
		var = 'P';
	}
	write(1, &var, 1);
}

int	main(void)
{
	int 	i;

	i = 5;
	ft_is_negative(i);
	return (0);
}
