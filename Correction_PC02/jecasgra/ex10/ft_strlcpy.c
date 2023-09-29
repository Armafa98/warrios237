/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: armafa-p <armafa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:28:32 by jecasgra          #+#    #+#             */
/*   Updated: 2023/09/21 18:56:12 by armafa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	len;

	counter = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size > 0)
	{
		while (counter < size - 1 && counter < len)
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);

int	main(void)
{
	char	*str;
	char	cpy[13];

	str = "Hello world\n";
	ft_putstr(str);
	ft_putnbr(ft_strlcpy(cpy, str, 13));
	write(1, "\n", 1);
	ft_putstr(cpy);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	write(1, str, len);
}

void	ft_putnbr(int nb)
{
	int		counter;
	char	c;

	counter = 1;
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb / (counter * 10) > 0 && counter < 1000000000)
		counter = counter * 10;
	while (counter > 0)
	{
		c = nb / counter + '0';
		write(1, &c, 1);
		nb -= (c - '0') * counter;
		counter /= 10;
	}
}
