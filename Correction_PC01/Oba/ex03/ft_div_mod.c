/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oba <oba@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:23:26 by oba               #+#    #+#             */
/*   Updated: 2023/09/19 19:58:38 by oba              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include    <unistd.h>
//*#include    <stdio.h>*
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
//
//int main()
//int a = 100;
//int b = 2;
//int div =0;
//int mod =0;
//
//div = ft_div_mod(a,b,div,mod) ;
//
//printf()
//
//return 0;}
