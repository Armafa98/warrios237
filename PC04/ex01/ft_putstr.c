/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:33:35 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/23 19:33:49 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[50] = "maMaN part @en Va?cANc&e da*ns un AIRBus 730!";

// 	ft_putstr(str);
// 	return (0);
// }
