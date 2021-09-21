#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("%d ", ft_iterative_power(2, 2));
	printf("%d ", ft_iterative_power(10, 10));
	printf("%d ", ft_iterative_power(0, 2));
	printf("%d ", ft_iterative_power(1, 5));
	printf("%d ", ft_iterative_power(9, 12));
	printf("%d ", ft_iterative_power(3, 5));
	printf("%d ", ft_iterative_power(3, 1));
	printf("%d ", ft_iterative_power(2, 16));
	return (0);
}
