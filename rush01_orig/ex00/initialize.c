int find_prob(int board[4][4], int i, int j)
{
	int c;
	int d;
	int x;
	int y;

	c = 0;
	d = 0;
	x = 0;
	y = 0;
	while (c < 4)
	{
		x |= 1 <<  board[i][c];
		c++;
	}
	x >>=1;
	c = 0;
	while (c < 4)
	{
		y |= 1 << board[c][j];
		c++;
	}
	y >>=1;
	d =0x0000000f & ~ (x | y);
	return d;
}

int find(int board[4][4], int i, int j)
{
	int d;

	d = find_prob(board, i, j);
	if (d ==1)
		return (1);
	if (d == 2)
		return (2);
	if (d == 4)
		return (3);
	if (d == 8)
		return (4);
	return (0);
}

void	write_b(int board[4][4])
{
	int	i;
	int	j;
	int	flag;
	i = 0;
	j = 0;
	flag = 1;
	while(flag)
	{
		flag = 0;
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (board[i][j] == 0)
					if ((board[i][j]  = find(board,i,j)))
						flag = 1;
				j++;
			}
			i++;
		}
	}
}
