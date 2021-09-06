#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int i = 0;
	int tab[] = {3, 4, 6, 1, 9, 0};
	int size = 6;

	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, size);
	i = 0;
	printf("\n");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}
