/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:57:57 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/23 19:33:13 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		*str = len;
		len++;
	}
	return (len);
}

// int	main(void)
// {
// 	char	str[50] = "maman part en vacance!";

// 	printf("len = %d", ft_strlen(str));
// 	return (0);
// }
