void	ft_swap(int *a, int *b);
/*
void ft_quicksort(int *arr, int left, int right){
	//Base Case
	if(left > right){
		return;
	}

	//Partition
	int pivot, i, j;

	pivot = arr[left];
	i = left + 1;
	j = i;

	while(j < right){
		if(arr[j] <= pivot){
			ft_swap(&arr[i], &arr[j]);
			i++;
		}

		j++;
	}
	ft_swap(&arr[left], &arr[i]);

	ft_quicksort(arr, left, i-1);
	ft_quicksort(arr, i+1, right);
}
*/

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
