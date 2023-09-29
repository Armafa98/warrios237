/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorisse <mmorisse@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:39:40 by mmorisse          #+#    #+#             */
/*   Updated: 2023/09/23 17:47:26 by mmorisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*ans;
	char	str[] = "fIx My wRiTiNg pLlLleASE";

	ans = ft_strlowcase(str);
	printf("%s\n", ans);
	return (0);
}*/
