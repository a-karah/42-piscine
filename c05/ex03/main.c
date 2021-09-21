#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int nb = 15;
	for (int i = -5; i < 10; i++)
		printf("power of %d ^ %d = %d\n", nb,i,ft_recursive_power(nb, i));
	return (0);
}
