/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:19:42 by oba               #+#    #+#             */
/*   Updated: 2023/09/27 16:28:39 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	retour;
	int	neg;

	neg = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			if (str[i] == '-')
				neg *= -1;
		if ((str[i] >= '0') && (str[i] <= '9'))
			break ;
		if ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			return (0);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		retour = retour * 10 +(str[i] - '0');
		i++;
	}
	retour = retour * neg;
	return (retour);
}

// int main()
// {
// char str[] = "---+--+1234ab567";
// int a = ft_atoi(str);

// printf("le chiffre est : %d",a);
// return (0);
// }