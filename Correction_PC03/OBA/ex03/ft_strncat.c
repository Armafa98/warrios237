/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:46:54 by oba               #+#    #+#             */
/*   Updated: 2023/09/27 17:16:32 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	compteft(char *src)
{
	int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)

{
	int				a;
	unsigned int	b;

	b = 0;
	a = compteft(dest);
	while (src[b] != '\0' && b < nb)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
// int main(void) 
// {
// char a[200]= "je ne suis";
// char b[]= "pas un heros";

// ft_strncat(a,b,3);

// printf("la phrase est: %s",a);

// return 0 ; }