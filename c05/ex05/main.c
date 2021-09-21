#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	for (int i = -2; i < 10000000; i++)
		if (ft_sqrt(i))
			printf("sqrt of %d is %d\n", i, ft_sqrt(i));
	return (0);
}
