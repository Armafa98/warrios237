/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcourche <zcourche@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:01:03 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 19:59:24 by zcourche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0') 
	{
		if (str[i] < 'a' || str[i] > 'z') 
			check = 0;
		i++;
	}
	return (check);
}
/*
#include <stdio.h>
int	main(void)
{
	char x[] = "abcde00100fg";
	char r;
	ft_str_is_lowercase(x);
	r = ft_str_is_lowercase(x);
	
	printf("Check %d\n", r);
}*/
