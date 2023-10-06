/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrett <fbarrett@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:40:16 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/02 17:36:17 by fbarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base, int base_length);
int	malloc_size(int i, int nbr, int base_length);
int	base_type_check(char *base);

void	swap(int i, int nbr, char *digit, int base_length)
{
	unsigned char	temp;

	i--;
	if (nbr < 0)
		base_length = 1;
	else
		base_length = 0;
	while (i > base_length)
	{
		temp = digit[i];
		digit[i] = digit[base_length];
		digit[base_length] = temp;
		i--;
		base_length++;
	}
}

char	*ft_return_zero(char *base, char *digit)
{
	digit[0] = base[0];
	return (digit);
}

char	*ft_putnbr_base(int nbr, char *base, int base_length)
{
	char	*digit;
	int		i;
	long	long_nbr;

	long_nbr = nbr;
	i = 0;
	digit = malloc(malloc_size(i, nbr, base_length));
	if (long_nbr == 0)
		return (digit = ft_return_zero(base, digit));
	if (nbr < 0)
	{
		digit[0] = '-';
		long_nbr *= -1;
		i++;
	}
	while (long_nbr > 0)
	{
		digit[i] = base[long_nbr % base_length];
		long_nbr = long_nbr / base_length;
		i++;
	}
	digit[i] = '\0';
	swap(i, nbr, digit, base_length);
	free(digit);
	return (digit);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	to_base_length;
	int	from_base_length;

	to_base_length = base_type_check(base_to);
	from_base_length = base_type_check(base_from);
	if (to_base_length < 2 || from_base_length < 2)
		return (NULL);
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from, from_base_length),
			base_to, to_base_length));
}
