#include <stdio.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_comp(int i, int j)
{
	return (i - j);
}

int	main(void)
{
	int	sorted[5] = {1, 2, 3, 3, 10};
	int	unsorted[5] = {4, 5, 6, 6, 2};

	printf("%d %d\n", ft_is_sort(sorted, 5, ft_comp), ft_is_sort(unsorted, 5, ft_comp));
	return (0);
}
