/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecasgra <jecasgra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:49:05 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 15:11:46 by jecasgra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		counter;
	char	*hexa;

	hexa = "0123456789abcdef";
	counter = -1;
	while (str[++counter] != '\0')
	{
		if (str[counter] < 32 || str[counter] > 126)
		{
			write(1, "\\", 1);
			write(1, &hexa[str[counter] / 16], 1);
			write(1, &hexa[str[counter] % 16], 1);
		}
		else
			write(1, &str[counter], 1);
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
