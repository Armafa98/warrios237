/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:21:07 by dkonate           #+#    #+#             */
/*   Updated: 2023/09/27 22:53:54 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	comp;

	comp = 0;
	while (str [comp] != '\0')
	{
		comp++;
	}
	return (comp);
}

int	main(void)
{
	char	*str;

	str = "bonjour norminette";
	int	resultat = ft_strlen(str);

	printf("Le resultat de la chaîne est : %d\n", resultat);
	return (0);
}
