/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:56:48 by armafa-p          #+#    #+#             */
/*   Updated: 2023/09/28 15:59:58 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	c;

	c = 'z';
	write(1, &c, 1);
	write(1, "\n", 1);
}
