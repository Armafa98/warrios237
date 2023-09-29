/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:14:52 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/21 19:14:59 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

int main()
{
    char myString[] = "Hello, wo9k&5w:m;sT>d!";
    int length = ft_strlen(myString);

    printf("La longueur de la chaîne est : %d\n", length);

    return 0;
}
