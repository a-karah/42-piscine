/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:41:03 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/11 20:43:48 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
# define STDIN 0
# define STDOUT 1
# define STDERR 2
# define BUFFER_SIZE 2048
# define BIG_BUFFER_SIZE 16384 //16kb

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

void	ft_putchar(int fd, char c);
void	ft_putstr(int fd, char *s);
int		ft_atoi(char *s);
int		ft_strcmp(char *s1, char *s2);
void	handle_error(char *fname);
void	read_stdin(void);
void	read_from_beginning(char *fname, int offset);
void	read_from_end(char *fname, int offset);

#endif
