#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int i = 0;
	int min = 89;
	int max = 1000;
	arr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
