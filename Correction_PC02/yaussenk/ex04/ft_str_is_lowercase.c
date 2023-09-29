/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:41:29 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/23 16:10:04 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	char	str[50] = "hhyeu48ksgYUOD8";
	ft_str_is_lowercase(str);
	printf("%i", ft_str_is_lowercase(str));
}
