#include <unistd.h>
#include <stdlib.h>

void	add_board(int *argv);

int err_num(int num)
{
	if (num < 16 || 0 != num % 4)
	{
	   	write(1 ,"hata!", 5);
		return (0);
	}
	return (1);
}

int	*find_num(char *str, int *nb)
{
	int	i;
	int j;
	int *tab;

	i = 0;
	j = 0;
	*nb = 0;
	while (0 != str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			*nb = *nb + 1;
		i++;
	}
	tab = (int *) malloc(sizeof(int) * *nb);
	i = 0;
	j = 0;
	while (0 != str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			tab[j++] = str[i] - '0';
		i++;
	}
	return (tab);
}

void print_board(int board[4][4])
{
	int i;
	int j;
	char c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = board[i][j]	+ '0';
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int *tab;
	int arg_count;
	int j;

	j = 0;
	if (argc != 2)
	{
		write(1, "fazla arguman!", 14);
		return (0);
	}
	tab = find_num(argv[1], &arg_count);
	if (!err_num(arg_count))
		return (0);
	add_board(tab);
}
