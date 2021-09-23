#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../includes/header.h"

void	initial_digits(char gb[3], int len, char *str)
{
	if (len == 2 && *str >= '2')
	{
		gb[0] = *str;
		gb[1] = '0';
		gb[2] = ':';
	}
	else if (len == 2)
	{
		gb[0] = *str;
		gb[1] = *(str + 1);
		gb[2] = ':';
	}
	else
	{
		gb[0] = *str;
		gb[1] = ':';
	}
}

int	jump_to_line(int len, char *str, int file_d)
{
	int		t;
	char	gb[3];
	char	tp[3];

	if (len > 2)
	{
		if (!jump_to_dict(len, file_d))
			return (0);
		return (1);
	}
	initial_digits(gb, len, str);
	while (1)
	{
		t = 0;
		while (t < len)
		{
			tp[t] = tp[t + 1];
			t++;
		}
		if (read(file_d, &tp[len], 1) < 0)
			return (0);
		if (ft_strcmp(gb, tp, len))
			return (1);
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	write_number(int file_d)
{
	int		i;
	char	ch;

	i = 0;
	while (1)
	{
		if (read(file_d, &ch, 1) < 1)
			return (0);
		if (ch == '\n')
			return (0);
		if (is_alpha(ch))
			break ;
	}
	while (1)
	{
		write(1, &ch, 1);
		if (read(file_d, &ch, 1) < 1)
			return (1);
		if (ch == '\n' || ch == '\0')
			break ;
	}
	return (1);
}

int	send_number(int ln, char *str, char *file_name)
{
	int	i;
	int	fd;

	fd = open(file_name, O_RDONLY);
	i = 0;
	if (fd < 1)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	if (!jump_to_line(ln, str, fd))
		return (0);
	if (!write_number(fd))
		return (0);
	else
	{
		if (ft_strlen(str) != 1 && (ln != 0))
			write(1, " ", 1);
	}
	close(fd);
	return (1);
}
