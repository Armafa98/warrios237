/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:31:54 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 19:59:54 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0') 
	{
		if (str[i] < 65 || str[i] > 90) 
			check = 0;
		i++;
	}
	return (check);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "BONjOUR";
	char r;
	ft_str_is_uppercase(x);
	r = ft_str_is_uppercase(x);
	
	printf("Check %d\n", r);
}*/
