#include "ft_hexdump.h"

void	ft_printhex(char *s)
{
}

void	ft_hexdump(char *fname)
{
	char	buf[BUFLEN];
	int		readsize;
	int		fd;

	fd = open(fname, O_RDONLY);
	if (fd < 0)
		handle_error(fname);
	else
	{
		while(1)
		{
			readsize = read(fd, buf, sizeof(buf));
			if (readsize == 0)
				break ;
		}
	}
}
