/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eguefif <eguefif@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:42:31 by eguefif           #+#    #+#             */
/*   Updated: 2023/09/28 08:19:05 by eguefif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H
# include <unistd.h>
# include <fcntl.h>
# define BUFFER_SIZE 100

void	ft_putchar(char c, int fd);
void	print_error(char *str);
void	print(char *str, int n);
int		init(char *str);

#endif
