/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:10:43 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 18:43:13 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
		dest[counter++] = '\0';
	return (dest);
}

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_putstr(char *str);

int	main(void)
{
	char	*str;
	char	cpy[8];

	str = "Hello\n";
	ft_putstr(str);
	ft_putstr(ft_strncpy(cpy, str, 4));
	ft_putstr(cpy);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}
