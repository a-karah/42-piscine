#include "../includes/bsq.h"

int	g_col;
int	g_s;

int	get_line_num(int fdesc, char *c)
{
	int		i;
	char	s[8];

	i = 0;
	while (read(fdesc, c, 1) > 0 && (*c >= '0' && *c <= '9') && i < (g_s - 3))
	{
		ft_strcpy(&s[i], c);
		++i;
	}
	return (ft_atoi(s));
}

int	content_error(int fdesc, char *eof, int lines, char *c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (read(fdesc, c, 1) > 0)
	{
		if ((*c != '\n') && !(check_content(eof[0], eof[1], *c)))
			return (-1);
		if (*c == '\n' && (i + lines) == lines)
			i = j;
		else if (*c == '\n' && (j % i != 0))
			return (-1);
		if (*c != '\n')
			j++;
		if (lines <= 0)
			return (-1);
		if (*c == '\n')
			--lines;
	}
	g_col = i;
	return (0);
}

int	get_line_eof(char *fname)
{
	char	c;
	int		i;
	int		fdesc;

	fdesc = open(fname, O_RDONLY);
	i = 0;
	while (read(fdesc, &c, 1) > 0 && c != '\n')
	{
		i++;
	}
	close(fdesc);
	return (i);
}

int	handle_error(char *fname)
{
	int		fdesc;
	char	c;
	int		lines;
	char	eof[3];
	int		i;

	i = -1;
	fdesc = open(fname, O_RDONLY);
	if (fdesc < 1)
		return (-1);
	g_s = get_line_eof(fname);
	lines = get_line_num(fdesc, &c);
	if (lines <= 0)
		return (-1);
	while (++i < 3)
	{
		eof[i] = c;
		read(fdesc, &c, 1);
	}
	if (is_identical(eof) == -1)
		return (-1);
	if (content_error(fdesc, eof, lines, &c) == -1)
		return (-1);
	close(fdesc);
	return (0);
}

int	error(char *fname)
{
	if (handle_error(fname) == -1)
	{
		write(1, "map error\n", 10);
		return (-1);
	}
	return (g_col);
}
