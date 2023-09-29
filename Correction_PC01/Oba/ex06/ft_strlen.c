/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:17:12 by oba               #+#    #+#             */
/*   Updated: 2023/09/20 22:42:33 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		compteur++;
	}
	return (compteur);
}


int main(void)
{

    int a;
	char  str[] = "Hello world!";
    a = ft_strlen(str);

    printf("le nombre est %d \n", a);
  return (0);
 }
