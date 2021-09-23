#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../includes/header.h"

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	input_error_handle(char *str)
{
	while (*str != '\0')
	{
		if (!is_digit(*str))
			return (-1);
		++str;
	}
	return (0);
}

int	error_handle(char *filename)
{
	int		fd;
	char	ch;
	int		ctrl;

	fd = open(filename, O_RDONLY);
	ctrl = 0;
	while (read(fd, &ch, 1) > 0)
	{
		if (ch == ':')
		{
			if ((read(fd, &ch, 1) > 0) && ch != ' ')
				return (-1);
			ctrl = 1;
		}
		else if (ch == '\n')
			ctrl = 0;
		else if (ctrl == 1)
		{
			if ((!is_alpha(ch)))
				return (-1);
		}
		else if (!(is_digit(ch)))
			return (-1);
	}
	return (0);
}
