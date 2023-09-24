/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:34:20 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/20 23:03:24 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "maB*Mljan";

// 	printf("rèponse = %s", ft_strupcase(str));
// 	return (0);
// }
