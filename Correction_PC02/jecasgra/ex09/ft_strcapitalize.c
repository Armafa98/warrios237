/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:03:20 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 18:54:23 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	counter;

	counter = 0;
	if (str[counter] >= 'a' && str[counter] <= 'z')
		str[counter] -= 32;
	while (str[++counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z')
			&& ((str[counter - 1] >= 'A' && str[counter - 1] <= 'Z')
				|| (str[counter - 1] >= 'a' && str[counter - 1] <= 'z')
				|| (str[counter - 1] >= '0' && str[counter] - 1 <= '9')))
			str[counter] += 32;
		else if ((str[counter] >= 'a' && str[counter] <= 'z')
			&& ((str[counter - 1] < 'A' && str[counter - 1] > 'Z')
				|| (str[counter - 1] < 'a' && str[counter - 1] > 'z')
				|| (str[counter - 1] < '0' && str[counter] - 1 > '9')))
			str[counter] -= 32;
	}
	return (str);
}

#include <unistd.h>

char	*ft_strcapitalize(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str[63];

	ft_putstr(ft_strcpy(str, "salut, comment tu vas? 42mots quarante-deux\n"));
	ft_putstr(ft_strcapitalize(str));
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = -1;
	while (src[++len] != '\0')
		dest[len] = src[len];
	dest[len] = '\0';
	return (dest);
}
