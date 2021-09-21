#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	i;
	int	j;

	i = -5;
	j = 2147483647;
	while (i < 100)
	{
		printf("for %d next prime is %d\n", i, ft_find_next_prime(i));
		i++;
	}
	printf("for %d next prime is %d\n", j, ft_find_next_prime(j));
	return (0);
}
