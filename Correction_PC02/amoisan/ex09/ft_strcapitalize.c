/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:34:04 by amoisan           #+#    #+#             */
/*   Updated: 2023/09/27 16:06:27 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	capitalize_next;
	int	i;

	capitalize_next = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			capitalize_next = 0;
		}
		else
			capitalize_next = 1;
		i++;
	}
	return (str);
}


#include <stdio.h>
int main()
{
	char string[] = "-tESt teST TEST\n";
	printf("%s\n", ft_strcapitalize(string));

	char string2[] = "salut, comment tu vas ? 42mots quarante-deux;";
	printf("%s ", ft_strcapitalize(string2));

	char string3[] = "cinquante+et+un";
	printf("%s\n", ft_strcapitalize(string3));
}
