/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-abed <eel-abed@42quebec.com>             +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:46:01 by eel-abed          #+#    #+#             */
/*   Updated: 2023/09/20 17:42:52 by eel-abed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// int main()
// {
//     char phrase1[] = "hbcd";
//     char phrase2[] = "abcD";

//     ft_strcmp(phrase1, phrase2);

// 	printf("%d", ft_strcmp(phrase1, phrase2));
// }
