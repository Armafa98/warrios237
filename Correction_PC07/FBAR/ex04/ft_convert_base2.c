/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrett <fbarrett@42quebec.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 17:28:40 by fbarrett          #+#    #+#             */
/*   Updated: 2023/10/02 17:36:19 by fbarrett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_type_check(char *base)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (base[i])
	{
		a = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[a])
		{
			if (base[i] == base[a])
				return (0);
			a++;
		}
		i++;
	}
	return (i);
}

int	final_calculation(char *str, char *base, int i, int base_type)
{
	int	a;
	int	nbr;

	nbr = 0;
	a = 0;
	while (base[a] && str[i])
	{
		if (str[i] == base[a])
		{
			nbr *= base_type;
			nbr += a;
			a = -1;
			i++;
		}
		a++;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base, int base_length)
{
	int	i;
	int	neg;
	int	final_nbr;

	i = 0;
	neg = 1;
	final_nbr = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	final_nbr = final_calculation(str, base, i, base_length);
	return (final_nbr * neg);
}

int	malloc_size(int i, int nbr, int base_length)
{
	if (nbr < 0)
		i++;
	while (nbr != 0)
	{
		nbr = nbr / base_length;
		i++;
	}
	return (i);
}
