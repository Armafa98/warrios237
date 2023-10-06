/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:51:38 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 09:27:22 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <stdlib.h>
# include <libgen.h>
# include <stdio.h>
# define BUFFER_SIZE 100

typedef struct s_buffers
{
	char	*buff1;
	int		remaining1;
	char	*buff2;
	int		remaining2;
}			t_buffers;

void	print_error(char *str);
void	print_file_error(char *file, char *name);
int		init(char *file);
void	ft_putchar(char c, int fd);
void	print(char *str, int n, int start);
int		init_buff(char **temp, t_buffers *buff, int size);
int		echo(void);
void	cpy(char *s1, char *s2, int n);
int		parsing(char **arg);
int		ft_atoi(char *str);
void	print_file_name(char *str, int print);
void	clean(t_buffers buff, char *temp);
int		is_options(int nb, char **argv);
void	read_zero(void);
int		st_din(int size);
int		read_file(int fd, int ret_size);

#endif
