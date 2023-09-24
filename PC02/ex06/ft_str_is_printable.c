/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:34:17 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/20 19:32:15 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	ptr;

	ptr = 0;
	while (str[ptr] >= ' ' && str[ptr] <= '~')
		ptr++;
	if ((str[ptr] > '\0' && str[ptr] < ' ') || str[ptr] == 127)
		return (0);
	else
		return (1);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "GRY*ju&g#gtt$fee@e3U!Y15+4OF/K=JKHKJ";
// 	printf("rèponse = %d", ft_str_is_printable(str));
// }
