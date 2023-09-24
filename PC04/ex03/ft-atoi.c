/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:47:34 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/23 19:30:58 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}

int	number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	ptr;
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	ptr = 0;
	while (space(str[ptr]))
		ptr++;
	while (str[ptr] == '-' || str[ptr] == '+')
	{
		if (str[ptr] == '-')
			sign = sign * -1;
		ptr++;
	}
	while (number(str[ptr]))
	{
		result = result * 10 + (str[ptr] - '0');
		ptr++;
	}
	return (result * sign);
}

// int main()
// {
// 	char str[] = " ---+-----+1234ab567";
// 	int result = ft_atoi(str);

// 	printf("%d\n", result);

// 	return (0);
// }
