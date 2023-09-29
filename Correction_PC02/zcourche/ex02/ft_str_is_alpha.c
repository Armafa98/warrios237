/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:47:46 by zcourche          #+#    #+#             */
/*   Updated: 2023/09/20 22:18:55 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			check = 0;
		i++;
	}
	return (check);
}

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	//char x[] = "Bonj0ur";
	char y[] = "grtudffeh";
	int c;
	int b;
	c = ft_str_is_alpha(y);

	printf("Devrait donner la valeur : %d\n", c);
	b = ft_str_is_alpha(y);
	printf("Devrait donner la valeur : %d\n", b);
}
