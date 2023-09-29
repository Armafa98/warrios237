/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoisan <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:47:32 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/22 11:41:27 by amoisan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	temp;
	int	i;

	i = 0;
	if (str[i] == '\0')
		temp = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			temp = 1;
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			temp = 1;
			i++;
		}
		else
		{
			temp = 0;
			break ;
		}
	}
	return (temp);
}

/*
#include <stdio.h>
int main()
{
	char string[] = "test";
	int result = ft_str_is_alpha(string);
	printf("%d\n", result);

	char string2[] = "";
	int result2 = ft_str_is_alpha(string2);
	printf("%d\n", result2);

	char string3[] = "te!st";
	int result3 = ft_str_is_alpha(string3);
	printf("%d\n", result3);

}
*/
