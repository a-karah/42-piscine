#include <stdio.h>
int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("fact = %d\n", ft_iterative_factorial(1));
	printf("fact = %d\n", ft_iterative_factorial(0));
	printf("fact = %d\n", ft_iterative_factorial(-5));
	printf("fact = %d\n", ft_iterative_factorial(10));
	printf("fact = %d\n", ft_iterative_factorial(16));
	return (0);
}
