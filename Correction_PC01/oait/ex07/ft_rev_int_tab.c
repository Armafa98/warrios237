/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:19:22 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/21 19:19:29 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	memoire;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		memoire = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = memoire;
		i++;
	}
}

 int main()
{
    int myArray[] = {1, 2, 3, 4, 5, 30, 6, 9, 0, 4};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    printf("Tableau avant inversion : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    ft_rev_int_tab(myArray, size);

    printf("Tableau après inversion : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
