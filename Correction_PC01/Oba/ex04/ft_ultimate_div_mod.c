/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:18:03 by oba               #+#    #+#             */
/*   Updated: 2023/09/20 21:34:12 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b ;
	modulo = *a % *b;
	*a = division ;
	*b = modulo ;
}
/*
int main()
{
    int a; 
    int b;
    a = 100;
    b = 0;

    ft_ultimate_div_mod(&a,&b) ;

    printf("la div de a et b est %d , le modulo de a par b est %d \n ", a,b);

return (0);
}*/
