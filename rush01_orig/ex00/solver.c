int	check(int board[4][4], int *argv);
int write_b(int board[4][4]);
int	find_prob(int board[4][4], int i, int j);
int solver(int *argv, int board[4][4]);

int	find_space(int board[4][4], int *i, int *j)
{
	*i = 0;
	while (*i < 4)
	{
		*j = 0;
		while (*j < 4)
		{
			if (board[*i][*j] == 0)
				return (1);
			*j = *j + 1;
		}
		*i = *i + 1;
	}
	return (0);
}



void copy_b(int dest[4][4], int src[4][4])
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		i++;
	}
}
int test_func(int board[4][4], int *argv, int i, int j)
{
	int d;
	d = find_prob(board,i,j);
	if (d & 1)
	{
		board[i][j] = 1;
		if(solver(argv,board))
			return (1);
	}
	if (d & 2)
	{
		board[i][j] = 2;
		if(solver(argv,board))
			return (1);
	}
	if (d & 4)
	{
		board[i][j] = 3;
		if(solver(argv,board))
			return (1);
	}
	if (d & 8)
	{
		board[i][j] = 4;
		if(solver(argv,board))
			return (1);
	}
	return (0);
}
int solver(int *argv, int board[4][4])
{
	int i;
	int	j;
	int copy_board[4][4];
	copy_b(copy_board, board);
	write_b(copy_board);
	if(find_space(copy_board,&i,&j))
		test_func(copy_board, argv, i, j);
	if (!check(copy_board, argv))
		return (0);
	copy_b(board, copy_board);
	return (1);
}
