/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 08:51:38 by eguefif           #+#    #+#             */
/*   Updated: 2023/10/03 08:20:35 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>
# define BUFFER_SIZE 500

void	print_error(void);
void	print_file_error(char *file, char *name);
int		init(char *file);
void	ft_putchar(char c, int fd);
void	print(char *str, int n);
void	init_buff(char *buff);
int		echo(void);

#endif
