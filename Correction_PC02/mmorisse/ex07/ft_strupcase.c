/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:48:54 by mmorisse          #+#    #+#             */
/*   Updated: 2023/09/23 17:48:18 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*ans;
	char	str[] = "fIx My wRiTiNg pLlLleASE";

	ans = ft_strupcase(str);
	printf("%s\n", ans);
	return (0);
}*/
