#include "ft_cat.h"

void	read_from_stdin(void)
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

void	read_from_file(char *fname)
{
	int		fd;
	char	buf[BUFFER_SIZE];
	int		readsize;

	fd = open(fname, O_RDONLY);
	if (fd < 1)
		handle_error(fname);
	else
	{
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
			write(STDOUT, &buf, readsize);
		}
		close(fd);
	}
}
