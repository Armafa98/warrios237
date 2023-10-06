/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:13:33 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/03 10:23:30 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	cpy(char *s1, char *s2, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		*s1 = *s2;
		i++;
		s1++;
		s2++;
	}
}

int	is_options(int nb, char **argv)
{
	int		i;

	i = 0;
	while (i < nb)
	{
		if (argv[i][0] == '-')
			return (2);
		i++;
	}
	return (0);
}
