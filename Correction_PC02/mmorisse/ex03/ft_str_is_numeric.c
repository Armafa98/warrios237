/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 10:28:16 by mmorisse          #+#    #+#             */
/*   Updated: 2023/09/22 10:57:44 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main(void)
{
	char	scr[] = "5142842";
	int		rtn;

	rtn = ft_str_is_numeric(scr);
	printf(" %d\n", rtn);
	return (0);
}*/
