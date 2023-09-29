/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmorea <onilotsu@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:47:38 by julmorea          #+#    #+#             */
/*   Updated: 2023/09/21 15:35:22 by julmorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(int a);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a >= 0 && a <= 98)
	{
		b = a + 1;
		while (b >= 0 && b <= 99)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			if (!(a >= 98 && b >= 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_putchar(int a)
{
	int	nb;
	int	nb1;

	nb = a / 10 + 48;
	nb1 = a % 10 + 48;
	write (1, &nb, 1);
	write (1, &nb1, 1);
}
// int main()
// {
// 	ft_print_comb2();
// }
