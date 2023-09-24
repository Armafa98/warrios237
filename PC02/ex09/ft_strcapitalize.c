/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:25:42 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/21 15:31:26 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

int	ft_upercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_alpha(char c)
{
	return (ft_lowercase(c) || ft_upercase(c) || ft_number(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_alpha(str[i - 1]) && ft_lowercase(str[i]))
			str[i] -= 32;
		else if (ft_alpha(str[i - 1]) && ft_upercase(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

// 	printf("Après : %s", ft_strcapitalize(str));
// 	return (0);
// }
