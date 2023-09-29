/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:54:00 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 20:00:23 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0') 
	{
		if (str[i] < 32 || str[i] >= 127)
			check = 0;
		i++;
	}
	return (check);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "bonijour";
	char r;
	ft_str_is_printable(x);
	r = ft_str_is_printable(x);
	
	printf("Check %d\n", r);
}*/
