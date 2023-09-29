/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaussenk <yaussenk@student.42quebec.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:30:31 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/22 20:07:36 by yaussenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
		{
			str[count] = str[count] + 32;
		}
		count++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[5];

	str[0] = 'Y';
	str[1] = 'A';
	str[2] = 'N';
	str[3] = 'A';
	str[4] = '\0';
	printf("Before:%s\n", str);
	ft_strlowcase(str);
	printf("After:%s\n", str);
	return (0);
}*/
