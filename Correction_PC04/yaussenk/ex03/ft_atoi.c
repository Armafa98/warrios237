/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:19:24 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/27 20:16:50 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	count;
	int	sign;

	count = 0;
	result = 0;
	sign = 1;
	if (str[count] == 0)
		return (0);
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			sign = sign * (-1);
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10 + ((str[count] - 48));
		count++;
	}
	return (sign * result);
}

int	main()
{
	char	str[] = " --e--+--+1234ab567";

	printf("mon atoi:%d\n", ft_atoi(str));
	int	num = atoi(str);
	printf("vrai atoi:%i\n",  num);
	return (0);
}
