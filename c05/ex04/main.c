#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	i;

	i = -1;
	while (i < 30)
	{
		printf("%d\n", ft_fibonacci(i));
		i++;
	}
	return (0);
}
