#include "ft.h"

int	main(void)
{
	int	a;
	int	b;

	a = 90;
	b = -50;
	ft_putchar('a');
	ft_putchar('\n');
	ft_putstr("Hello, World");
	ft_putchar('\n');
	printf("len = %d\n", ft_strlen("hello"));
	printf("cmp = %d\n", ft_strcmp("123", "234"));
	ft_swap(&a, &b);
}
