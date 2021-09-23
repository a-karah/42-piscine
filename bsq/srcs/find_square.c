#include "../includes/bsq.h"

int	min(int a, int b, int c)
{
	int	min;

	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	return (min);
}

int	is_in_range(int i, int j, int m[3])
{
	int	max;

	max = m[0] - 1;
	if ((i >= (m[1] - max) && i <= (m[1])) && (j >= m[2] - max && j <= m[2]))
		return (1);
	return (0);
}

void	print_result(int **m, int rowcol[2], int mij[3], char *eof)
{
	int	i;
	int	j;

	i = 0;
	while (++i < rowcol[0])
	{
		j = 0;
		while (++j < rowcol[1])
		{
			if (is_in_range(i, j, mij))
				write(1, &eof[2], 1);
			else if (m[i][j] == 0)
				write(1, &eof[1], 1);
			else
				write(1, &eof[0], 1);
		}
		write(1, &"\n", 1);
	}
}

int	*find_max(int **m, int row, int col)
{
	int			i;
	int			j;
	static int	largest[3];

	i = 0;
	largest[0] = 0;
	while (++i < row)
	{
		j = 0;
		while (++j < col)
		{
			if (m[i][j] == 1)
			{
				m[i][j] = 1 + min(m[i - 1][j], m[i][j - 1], m[i - 1][j - 1]);
				if (largest[0] < m[i][j])
				{
					largest[0] = m[i][j];
					largest[1] = i;
					largest[2] = j;
				}
			}
		}
	}
	return (largest);
}
