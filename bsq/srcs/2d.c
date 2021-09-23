#include "../includes/bsq.h"

int	**create_2d(int row, int col)
{
	int	**arr;
	int	*a;
	int	i;
	int	j;

	arr = (int **) malloc(sizeof(int *) * row);
	if (arr == NULL)
	{
		write(1, &"Out of memory\n", 14);
	}
	i = -1;
	while (++i < row)
	{
		j = -1;
		a = (int *) malloc(sizeof(int) * col);
		while (++j < col)
			a[j] = 0;
		arr[i] = a;
	}
	return (arr);
}

void	deallocate_2d(int **arr, int row)
{
	int	i;

	i = -1;
	while (++i < row)
	{
		free(arr[i]);
	}
	free(arr);
}
