#include <unistd.h>
#include <stdio.h>

void	start_up(int *argv, int board[4][4])
{
	int i;
	int j;

	j = 0;
	write(1, argv,16);
	while (j < 4)
	{
		i = 0;
		if (argv[j] == 4)
		{
			while (i < 4)
			{
				board[i][j] = i + 1;
				i++;
			}
		}
		if (argv[j] == 1)
		{
			board[i][j] = 4;
			if (argv[j + 4] == 2)
				board[i + 3][j] = 3;
		}
		if (argv[j] == 2 && argv[j + 4] == 3)
			board[i + 1][j] = 4;
		j++;
	}
}

void	start_down(int *argv, int board[4][4])
{
	int i;
	int j;

	j = 0;
	write(1, argv,16);
	while (j < 4)
	{
		i = 3;
		if (argv[j] == 4)
		{
			while (i > -1)
			{
				board[i][j] = 4 - i;
				i--;
			}
		}
		if (argv[j] == 1)
		{
			board[i][j] = 4;
			if (argv[j - 4] == 2)
				board[i - 3][j] = 3;
		}
		if (argv[j] == 2 && argv[j - 4] == 3)
			board[i - 1][j] = 4;
		j++;
	}
}

void	start_left(int *argv, int board[4][4])
{
	int i;
	int j;

	i = 0;
	write(1, argv,16);
	while (i < 4)
	{
		j = 0;
		if (argv[i] == 4)
		{
			while (j < 4)
			{
				board[i][j] = j + 1;
				j++;
			}
		}
		if (argv[i] == 1)
		{
			board[i][j] = 4;
			if (argv[i + 4] == 2)
				board[i][j + 3] = 3;
		}
		if (argv[i] == 2 && argv[i + 4] == 3)
			board[i][j + 1] = 4;
		i++;
	}
}

void	start_right(int *argv, int board[4][4])
{
	int i;
	int j;

	i = 0;
	write(1, argv,16);
	while (i < 4)
	{
		j = 3;
		if (argv[i] == 4)
		{
			while (j > -1)
			{
				board[i][j] = 4 - j;
				j--;
			}
		}
		if (argv[i] == 1)
		{
			board[i][j] = 4;
			if (argv[i - 4] == 2)
				board[i][j - 3] = 3;
		}
		if (argv[i] == 2 && argv[i - 4] == 3)
			board[i][j - 1] = 4;
		i++;
	}
}

void start_board(int *argv, int board[4][4])
{
	start_up(argv, board);
	start_down((argv + 4), board);
	start_left((argv + 8), board);
	start_right((argv + 12), board);
}
