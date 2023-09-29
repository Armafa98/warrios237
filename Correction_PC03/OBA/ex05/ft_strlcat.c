/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:27:19 by oba               #+#    #+#             */
/*   Updated: 2023/09/25 15:56:28 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	compteurdest;
	unsigned int	compteursrc;
	unsigned int	len;

	compteurdest = 0;
	compteursrc = 0;
	while (dest[compteurdest] != '\0')
		++compteurdest;
	while (src[compteursrc] != '\0')
		++compteursrc;
	len = compteursrc;
	if (size <= compteurdest)
		len += size;
	else
		len += compteurdest;
	compteursrc = 0;
	while (src[compteursrc] != '\0' && compteurdest + 1 < size)
	{
		dest[compteurdest] = src[compteursrc];
		compteurdest++;
		compteursrc++;
	}
	dest[compteurdest] = '\0';
	return (len);
}

// int main()
// {
// char dest[] ="luke je"; //8
// char src[] ="suis ton pere"; //14

// int a = ft_strlcat(dest,src,40);

//    printf("la phrase est %d",a) ;

// return (0);}