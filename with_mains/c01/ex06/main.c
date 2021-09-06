#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	int ans;
	ans = ft_strlen("Hello, World!");
	printf("len = %d", ans);
	return 0;
}
