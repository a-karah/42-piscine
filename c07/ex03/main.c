#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char *s1 = "Hello";
	char *s2 = "World";
	char *sep = ", ";
	char *strs[2];
	strs[0] = s1;
	strs[1] = s2;
	char *res = ft_strjoin(2, strs, sep);
	printf("%s", res);
}
