#include <stdio.h>
void	ft_swap(int *a, int *b);

int main(void)
{
	int a = 25;
	int b = 100;
	int *p = &a;
	int *p1 = &b;

	printf("a = %d, b = %d\n", a, b);
	ft_swap(p, p1);
	printf("a = %d, b = %d", a, b);
	return 0;
}
