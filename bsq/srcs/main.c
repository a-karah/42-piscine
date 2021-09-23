#include "../includes/bsq.h"

char	g_buffer;
int		g_fdesc;

void	get_rs_in(void)
{
	int		**map;
	int		col;
	int		*rowcol;
	int		*maxij;

	col = error("customap");
	map = read_file("customap", col);
	rowcol = get_g_row_col();
	maxij = find_max(map, rowcol[0], rowcol[1]);
	write(1, &"\n", 1);
	print_result(map, rowcol, maxij, get_g_eof());
	deallocate_2d(map, rowcol[0]);
}

void	get_from_standart_input(void)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	g_fdesc = open("customap", O_CREAT | O_RDWR | O_TRUNC, 0666);
	while (read(0, &g_buffer, 1))
	{
		write(g_fdesc, &g_buffer, sizeof(g_buffer));
		if (g_buffer == '\n' && k == 0)
		{
			j = i;
			k = 1;
		}
		i++;
	}
	close(g_fdesc);
	get_rs_in();
}

int	main(int argc, char *argv[])
{
	int		**map;
	int		col;
	int		*rowcol;
	int		*maxij;
	int		i;

	i = 0;
	if (argc == 1)
		get_from_standart_input();
	while (argc > 1)
	{
		col = error(argv[++i]);
		if (col != -1)
		{
			map = read_file(argv[i], col);
			rowcol = get_g_row_col();
			maxij = find_max(map, rowcol[0], rowcol[1]);
			print_result(map, rowcol, maxij, get_g_eof());
			deallocate_2d(map, rowcol[0]);
		}
		if (argc > 2)
			write(1, &"\n", 1);
		--argc;
	}
	return (0);
}
