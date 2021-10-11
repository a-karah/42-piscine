/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarahan <akarahan@student.42istanbul      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:22:24 by akarahan          #+#    #+#             */
/*   Updated: 2021/10/11 21:17:04 by akarahan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	read_stdin(void)
{
	char	buf[BUFFER_SIZE];
	int		readsize;

	while (1)
	{
		readsize = read(STDIN, buf, sizeof(buf));
		if (readsize < 0)
		{
			ft_putstr(STDERR, strerror(errno));
			break ;
		}
		else if (readsize == 0)
			break ;
		write(STDOUT, &buf, readsize);
	}
}

int	total_bytes(char *fname)
{
	int	fd;
	int	readsize;
	int	total_read;
	char buf[BIG_BUFFER_SIZE];

	fd = open(fname, O_RDONLY);
	if (fd < 1)
		handle_error(fname);
	else
	{
		total_read = 0;
		while (1)
		{
			readsize = read(fd, buf, sizeof(buf));
			if (readsize < 0)
			{
				handle_error(fname);
				break ;
			}
			else if (readsize == 0)
				break ;
			total_read += readsize;
		}
	}
	close(fd);
	return (total_read);
}

void	read_from_end(char *fname, int offset)
{
	int		fd;
	char	buf[BUFFER_SIZE];
	int		readsize;
	int		total_read;
	int		total_size;
	int		offset_from_beginning;

	fd = open(fname, O_RDONLY);
	if (fd < 1)
		handle_error(fname);
	else
	{
		total_read = 0;
		total_size = total_bytes(fname);
		offset_from_beginning = total_size - offset;
		while (1)
		{
			readsize = read(fd, buf, sizeof(buf));
			if (readsize < 0)
			{
				handle_error(fname);
				break ;
			}
			else if (readsize == 0)
				break ;
			if (total_read < offset_from_beginning)
			{
				if (offset_from_beginning < total_read + readsize)
					write(STDOUT, (buf + offset_from_beginning % BUFFER_SIZE),
							readsize - offset_from_beginning % BUFFER_SIZE);
			}
			else
				write(STDOUT, buf, readsize);
			total_read += readsize;
		}
		close(fd);
	}
}

void	read_from_beginning(char *fname, int offset)
{
	int		fd;
	char	buf[BUFFER_SIZE];
	int		readsize;
	int		total_read;

	fd = open(fname, O_RDONLY);
	if (fd < 1)
		handle_error(fname);
	else
	{
		total_read = 0;
		while (1)
		{
			readsize = read(fd, buf, sizeof(buf));
			if (readsize < 0)
			{
				handle_error(fname);
				break ;
			}
			else if (readsize == 0)
				break ;
			if (total_read < offset)
			{
				if (offset < total_read + readsize)
					write(STDOUT, (buf + offset % BUFFER_SIZE),
						readsize - offset % BUFFER_SIZE);
			}
			else
				write(STDOUT, buf, readsize);
			total_read += readsize;
		}
		close(fd);
	}
}
