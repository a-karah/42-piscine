int check_up(int board[4][4], int *argv)
{
	int i;
	int j;
	int c;
	int nb;

	i = 0;
	j = 0;
	c = 0;
	nb = 0;
	while (j < 4)
	{
		c = 0;
		i = 0;
	nb = 0;
		while (i < 4)
		{
			if (board[i][j] > nb)
			{
				nb = board[i][j];
				c++;
			}
			i++;
		}
		if (argv [j] != c)
			return (0);
		j++;
	}
	return (1);
}

int check_down(int board[4][4], int *argv)
{
	int i;
	int j;
	int c;
	int nb;

	i = 0;
	j = 0;
	c = 0;
	nb = 0;
	while (j < 4)
	{
		c = 0;
		i = 3;
	nb = 0;
		while (i > -1)
		{
			if (board[i][j] > nb)
			{
				nb = board[i][j];
				c++;
			}
			i--;
		}
		if (argv [j] != c)
			return (0);
		j++;
	}
	return (1);
}

int check_left(int board[4][4], int *argv)
{
	int i;
	int j;
	int c;
	int nb;

	i = 0;
	j = 0;
	c = 0;
	nb = 0;
	while (i < 4)
	{
		c = 0;
		j = 0;
	nb = 0;
		while (j < 4)
		{
			if (board[i][j] > nb)
			{
				nb = board[i][j];
				c++;
			}
			j++;
		}
		if (argv [i] != c)
			return (0);
		i++;
	}
	return (1);
}

int check_right(int board[4][4], int *argv)
{
	int i;
	int j;
	int c;
	int nb;

	i = 0;
	j = 0;
	c = 0;
	nb = 0;
	while (i < 4)
	{
		c = 0;
		j = 3;
	nb = 0;
		while (j > -1)
		{
			if (board[i][j] > nb)
			{
				nb = board[i][j];
				c++;
			}
			j--;
		}
		if (argv [i] != c)
			return (0);
		i++;
	}
	return (1);
}

int check(int board[4][4], int *argv)
{
	if (!check_up(board, argv))
		return (0);
	if (!check_down(board, (argv + 4)))
		return (0);
	if (!check_left(board,( argv + 8)))
		return (0);
	if (!check_right(board,( argv + 12)))
		return (0);
	return (1);
}
