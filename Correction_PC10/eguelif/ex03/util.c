/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 07:51:00 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 13:19:53 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	print_double_space(void)
{
	ft_putchar(' ', 1);
	ft_putchar(' ', 1);
}

void	print_star(void)
{
	ft_putchar('*', 1);
	ft_putchar('\n', 1);
}
