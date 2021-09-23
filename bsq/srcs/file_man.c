#include "../includes/bsq.h"

int		g_c;
int		g_r;
char	*g_eof;

char	*get_g_eof(void)
{
	static char	*e;

	e = g_eof;
	return (e);
}

int	*get_g_row_col(void)
{
	static int	rowcol[2];

	rowcol[0] = g_r;
	rowcol[1] = g_c;
	return (rowcol);
}

char	*get_eof(int fdesc, char *c)
{
	static char	eof[3];
	int			i;

	i = -1;
	while (++i < 3)
	{
		eof[i] = *c;
		read(fdesc, c, 1);
	}
	return (eof);
}

int	**get_line(int fdesc, int l, char *eof, char *c)
{
	int	**map;
	int	i;
	int	j;

	i = 0;
	map = create_2d(g_r, g_c);
	while (++i < l)
	{
		j = 1;
		while (read(fdesc, c, 1) > 0 && *c != '\n')
		{
			map[i][j] = get_val_eof(eof, *c);
			++j;
		}
	}
	return (map);
}

int	**read_file(char *filename, int col)
{
	char	*eof;
	int		l;
	int		fdesc;
	char	c;
	int		**map;

	fdesc = open(filename, O_RDONLY);
	g_c = col + 1;
	l = get_line_num(fdesc, &c);
	g_r = l + 1;
	eof = get_eof(fdesc, &c);
	g_eof = eof;
	map = get_line(fdesc, g_r, eof, &c);
	return (map);
}
