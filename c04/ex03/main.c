#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(char *str);

int	main(void)
{
	int i = atoi("   ---+0123Ahsdasl3213");
	int j = ft_atoi("  ---+01230Ahsdasl3213");
	printf("$%d$\n$%d$\n", i, j);
	return 0;
}
