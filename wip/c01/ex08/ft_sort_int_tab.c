void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
	*b = temp;
}

void	ft_bubblesort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 1;
		while (j < size - i)
		{
			if (arr[j] < arr[j] - 1)
			{
				ft_swap(&arr[j], &arr[j - 1]);
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	ft_bubblesort(tab, size);
}
