/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecasgra <jecasgra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:25:28 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 14:50:27 by jecasgra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = -1;
	while (src[++len] != '\0')
		dest[len] = src[len];
	dest[len] = '\0';
	return (dest);
}

/*#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int	main(void)
{
	char	*str;
	char	cpy[6];

	str = "Hello\n";
	ft_putstr(str);
	ft_putstr(ft_strcpy(cpy, str));
	ft_putstr(cpy);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}*/
