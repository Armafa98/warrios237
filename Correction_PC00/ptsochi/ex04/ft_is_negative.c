/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptsochi- <ptsochi-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:25:00 by ptsochi-          #+#    #+#             */
/*   Updated: 2023/09/18 16:58:10 by ptsochi-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_is_negative(int n)
{
	if (0 <= n)
		write (1, "P", 1);
	else
		write (1, "N", 1);
}
