#include <stdio.h>
char	*ft_strlowcase(char *str);

int main(void)
{
	char str[] = "HEllO, WoRlD!";
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s", str);
	return 0;
}
