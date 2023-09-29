/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:33:52 by yaussenk          #+#    #+#             */
/*   Updated: 2023/09/23 16:14:54 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}
		count++;
	}
	return (str);
}

int	main(void)
{
	char	str[50] = "maman part en voyage";

	// str = "maman";
	// str[0] = 'y';
	// str[1] = 'a';
	// str[2] = 'n';
	// str[3] = 'a';
	// str[4] = '!';
	// str[5] = '\0';
	ft_strupcase(str);
	printf("%s", str);
}
