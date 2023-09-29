/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-el- <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:20:14 by oait-el-          #+#    #+#             */
/*   Updated: 2023/09/21 19:20:17 by oait-el-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	memoire;
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				memoire = tab[j];
				tab[j] = tab[i];
				tab[i] = memoire;
			}
			j++;
		}
		j = i + 1;
		i++;
	}
}

int main()
{
    int myArray[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    ft_sort_int_tab(myArray, size);

    printf("Tableau après tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");

    return 0;
}
