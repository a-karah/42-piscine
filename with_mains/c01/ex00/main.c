#include <stdio.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int a;
	int *p;

	a = 101;
	p = &a;
	printf("a = %d\n", a);
	ft_ft(p);
	printf("a = %d", a);
	return (0);
}
