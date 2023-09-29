/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:07:46 by hezhukov          #+#    #+#             */
/*   Updated: 2023/09/21 19:33:30 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		ptr++;
	}
	return (ptr - str);
}


int main()
{
    char str[] = "Hello, world!";
    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
