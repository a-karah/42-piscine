#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 25;
	int b = 15;
	int *div = &a;
	int *mod = &b;

	printf("a = %d b = %d\n", a, b);
	ft_ultimate_div_mod(div, mod);
	printf("a = %d b = %d\n", a, b);
}
