/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:09:42 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 20:02:10 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0') 
	{
		if (str[i] < 48 || str[i] > 57) 
			check = 0;
		i++;
	}
	return (check);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "0213y212";
	char r;
	ft_str_is_numeric(x);
	r = ft_str_is_numeric(x);
	
	printf("Check %d\n", r);
}*/
