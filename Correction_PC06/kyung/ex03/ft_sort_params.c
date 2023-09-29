/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:39:30 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/09/27 16:51:56 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	swap2(char *str1, char *str2)
{
	char	tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	swap(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] && str2[i])
	{
		swap2(&str1[i], &str2[i]);
		i++;
	}
	if (str1[i])
	{
		str2[i] = str1[i];
		str1[i--] = '\0';
		while (str1[++i])
			str2[i] = str1[i];
		str1[i] = '\0';
	}
	else
	{
		str1[i] = str2[i];
		str2[i--] = '\0';
		while (str2[++i])
			str1[i] = str2[i];
		str1[i] = '\0';
	}
}

void	sort(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i - 1 < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			k = 0;
			while (argv[i][k] && argv[j][k] && (argv[i][k] == argv[j][k]))
			{
				k++;
			}
			if (argv[i][k] - argv[j][k] > 0)
				swap(argv[i], argv[j]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc >= 2)
	{
		sort(argc, argv);
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
