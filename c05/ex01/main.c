#include <stdio.h>
int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("fact %d\n", ft_recursive_factorial(-15));
	printf("fact %d\n", ft_recursive_factorial(0));
	printf("fact %d\n", ft_recursive_factorial(1));
	printf("fact %d\n", ft_recursive_factorial(5));
	printf("fact %d\n", ft_recursive_factorial(10));
	return (0);
}
