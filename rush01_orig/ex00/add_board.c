int	start_board(int *argv, int board[4][4]);
void print_board(int board[4][4]);
int solver(int *argv, int board[4][4]);

void	add_board(int *argv)
{
	int	board[4][4];
	int	i;
	int	*p;

	i = 0;
	p = &board[0][0];
	while (i < 16)
	{
		p[i] = 0;
		i++;
	}
	start_board(argv, board);
 	i = solver(argv, board);
	print_board(board);
}
