#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	**tab;
	int i = 0;
	int j;
	int min = 89;
	int max = 1000;
	j = ft_ultimate_range(tab, min, max);
	while (i < max - min)
	{
		printf("%d ", tab[0][i]);
		i++;
	}
	return (0);
}
