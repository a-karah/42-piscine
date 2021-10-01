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

void	read_file(char *fname, int offset)
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
					write(STDOUT, (buf + offset % BUFFER_SIZE), readsize - offset % BUFFER_SIZE);
			}
			else
				write(STDOUT, buf, readsize);
			total_read += readsize;
		}
		close(fd);
	}
}
