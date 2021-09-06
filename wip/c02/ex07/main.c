#include <stdio.h>
char	*ft_strupcase(char *str);

int main(void)
{
	char str[] = "hello, world!";
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s", str);
	return 0;
}
