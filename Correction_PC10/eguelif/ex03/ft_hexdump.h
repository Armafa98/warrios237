/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:51:38 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/05 13:09:35 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>
# include <stdio.h>
# include <stdlib.h>
# define BUFFER_SIZE 16

typedef struct s_buff
{
	char	buff[16];
	char	last[16];
	int		start;
	int		count;
	int		fd;
	int		track;
	int		flag;
}			t_buff;

char	*get_content(int size, char **files, int flag, int *content_size);
void	print_file_error(char *file, char *name);
void	init(t_buff *buff);
void	ft_putchar(char c, int fd);
void	print(char *str, int n);
int		build_content(char *content, int size, char **files, int flag);
void	print_content(int flag, char **files, int nbr);
void	print_hexa(char a, char *base);
void	print_row(char *content, int size, int flag);
int		is_same_row(char *content);
void	print_double_space(void);
void	print_star(void);
int		count_file(int fd);
void	copy(char *s1, char *s2);
void	print_error(char *str);
int		cmp(t_buff *buff);
void	handle_stdin(int flag);
void	print_str_error(char *file, char *name, char *str);
int		fill_buffer(t_buff *buff, int flag);
void	print_address(int c, int flag, char *base);
void	init_buff(char *buff);
int		ft_strlen(char *str);
void	print_last(t_buff buff, int flag, int reval);

#endif
