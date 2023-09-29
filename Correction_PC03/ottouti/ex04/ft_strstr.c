/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:40:08 by ottouti           #+#    #+#             */
/*   Updated: 2023/09/25 16:10:22 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		while (str[i] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i - j]);
			++i;
			++j;
		}
		++i;
		j = 0;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	//TEST 1 - to_find is in the string
	char str[] = "Where's Waldo?";
	char to_find[] = "Waldo";
	char *ptr_str = str;
	char *ptr_to_find = to_find;


	char *result = ft_strstr(ptr_str, ptr_to_find);
	char *result_check = strstr(ptr_str, ptr_to_find);


	if (result == result_check)
	{
		printf("\033[1;32mTest 1 Passed!\033[1;0m\n");
		printf("'%s' is at address %lu.\n", to_find, (unsigned long int)result);
	}
	else
	{
		printf("\033[1;31mTest 1 Failed!\033[1;0m\n");
		printf("'%s' is not at address %lu. \n It is as address %lu.\n", to_find, (unsigned long int)result, (unsigned long int)result_check);
	}
}
