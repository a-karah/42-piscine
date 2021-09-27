#include "ft_display.h"

int	main(int argc, char *argv[])
{
	int		fd;
	char	buf;

	if (argc < 2)
		handle_error(1);
	else if (argc == 2)
	{
		if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 \
			|| ft_strcmp(argv[1], "./") == 0 || ft_strcmp(argv[1], "..") == 0 \
			|| ft_strcmp(argv[1], "../") == 0)
			ft_putstr(STDOUT, "Is a directory.\n");
		fd = open(argv[1], O_RDONLY);
		if (fd < 1)
			handle_error(3);
		else
		{
			while (read(fd, &buf, 1) > 0)
				ft_putchar(STDOUT, buf);
			close(fd);
		}
	}
	else if (argc > 2)
		handle_error(2);
	ft_putchar(STDOUT, '\n');
	return (0);
}
