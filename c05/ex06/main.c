#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	i;

	i = -3;
	while (i < 100)
	{
		if (ft_is_prime(i))
			printf("%d is prime\n", i);
		i++;
	}
	return (0);
}
