#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char *str = "";
	char *copy;
	char *copy1;

	copy = ft_strdup(str);
	copy1 = strdup(str);
	printf("original = %s\nstrdup = %s %zd bytes\n", str, copy1, sizeof copy1);
	printf("ft_strdup = %s %zd bytes", copy, sizeof copy);
	return (0);
}
