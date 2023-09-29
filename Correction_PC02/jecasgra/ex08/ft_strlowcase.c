/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecasgra <jecasgra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:38:33 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 15:01:39 by jecasgra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = -1;
	while (str[++counter] != '\0')
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] += 32;
	return (str);
}

/*#include <unistd.h>

char	*ft_strlowcase(char *str);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	str[8];

	ft_putstr(ft_strcpy(str, "HELLO!\n"));
	ft_putstr(ft_strlowcase(str));
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
}*/
