/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisan <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:22:41 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/25 14:25:45 by amoisan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	temp;

	i = 0;
	if (str[i] == '\0')
	{
		temp = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp = 1;
		}
		else
		{
			temp = 0;
			break ;
		}
		i++;
	}
	return (temp);
}

/*
#include <stdio.h>
int main()
{
	char string[] = "";
	int result = ft_str_is_numeric(string);
	printf("%d\n", result);

	char string2[] = "1234";
	int result2 = ft_str_is_numeric(string2);
	printf("%d\n", result2);

	char string3[] = "T32T";
	int result3 = ft_str_is_numeric(string3);
	printf("%d\n", result3);

}
*/
