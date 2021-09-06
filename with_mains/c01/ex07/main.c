#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int i = 0;
	int tab[] = {0, 1, 2, 3, 4};
	int tab1[] = {9, 8, 7, 6};

	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 4)
	{
		printf("%d ", tab1[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_rev_int_tab(tab, 5);
	ft_rev_int_tab(tab1, 4);
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	while (i < 4)
	{
		printf("%d ", tab1[i]);
		i++;
	}
	return 0;
}
