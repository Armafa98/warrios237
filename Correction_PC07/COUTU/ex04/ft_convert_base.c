/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:09 by lcouturi          #+#    #+#             */
/*   Updated: 2023/09/29 11:14:50 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		checkbase(char *base);
int		fn(char c, char *base_from);
char	*ft_putnbr_base(long nbr, char *base, int sign);
int		ft_strlen(char *nbr);
void	skip(char *nbr, int *i, int *sign);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	returned;
	int	sign;

	i = 0;
	sign = 0;
	returned = 0;
	if (checkbase(base_from) == 0 || checkbase(base_to) == 0)
		return (0);
	skip(nbr, &i, &sign);
	while (i < ft_strlen(nbr) - 1 && nbr[i] && fn(nbr[i], base_from) != -1)
	{
		returned += fn(nbr[i], base_from);
		if (++i && fn(nbr[i], base_from) == -1)
			break ;
		returned *= ft_strlen(base_from);
	}
	if (fn(nbr[i], base_from) != -1)
		returned += fn(nbr[i], base_from);
	return (ft_putnbr_base((long)returned, base_to, sign));
}

int	main(void)
{
	printf("%s\n", ft_convert_base("  	-++---++-", "0123456789ABCDEF", "0123456789"));
}
