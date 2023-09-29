/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaris-m <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:45:29 by mfaris-m          #+#    #+#             */
/*   Updated: 2023/09/19 20:58:15 by mfaris-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	write(1, "zyxwtsrqponmlkjihgfedcba", 26);
}
/*
int	main(void)

{
	ft_print_reverse_alphabet();
	return (0);
} */
