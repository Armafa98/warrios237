/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:34:54 by fbarrett          #+#    #+#             */
/*   Updated: 2023/09/19 17:27:25 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	int		b;
	char	str[] = "Hello World and jack and mike and bob and ginette and georgette";

	b = ft_strlen(&str[0]);
	//write(1, &b, 1);
	printf("%d", b);
}
