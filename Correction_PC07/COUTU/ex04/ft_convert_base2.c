/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouturi <lcouturi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/09/28 21:29:20 by lcouturi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	checkbase(char *base)
{
	int	i;
	int	i2;

	i = 0;
	while (base[i])
	{
		i2 = i + 1;
		while (base[i2++ - 1])
			if (base[i2 - 1] == base[i] || base[i] == '+' || base[i] == '-')
				return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	fn(char c, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i] != c)
	{
		if (base_from[i] == '\0' || c == '\0')
			return (-1);
		i++;
	}
	return (i);
}

int	ft_strlen(char *nbr)
{
	int	index;

	index = 0;
	while (nbr[index])
		index++;
	return (index);
}

char	*ft_putnbr_base(long nbr, char *base, int sign)
{
	char	*returned;
	int		i;
	long	t[2];

	i = 0;
	t[0] = 1;
	t[1] = nbr;
	while (t[1] >= ft_strlen(base) && t[0]++)
		t[1] /= ft_strlen(base);
	returned = malloc(t[0] + 1);
	t[1] = 1;
	while (t[0]-- > 1 && ft_strlen(base) > 1)
		t[1] *= ft_strlen(base);
	if (sign % 2 == 1 && nbr != 0)
	{
		returned[0] = '-';
		i++;
	}
	while (t[1] > 0)
	{
		returned[i++] = base[nbr / t[1] % ft_strlen(base)];
		t[1] /= ft_strlen(base);
	}
	return (returned);
}

void	skip(char *nbr, int *i, int *sign)
{
	while ((nbr[*i] > 8 && nbr[*i] < 14) || nbr[*i] == 32)
		*i += 1;
	while (nbr[*i] == '+' || nbr[*i] == '-')
	{
		if (nbr[*i] == '-')
			*sign += 1;
		*i += 1;
	}
}
