/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:10:35 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/21 19:10:39 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
# include <stdio.h>

void	ft_swap(int	*a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
    int x = 5;
    int y = 10;

    printf("Avant l'échange : x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Après l'échange : x = %d, y = %d\n", x, y);

    return 0;
}
