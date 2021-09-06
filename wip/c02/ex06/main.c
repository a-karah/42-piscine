#include <stdio.h>
int	ft_str_is_printable(char *str);

int	main(void)
{
	char str[] = "Hello, World!#$%*$(!@$";
	char str1[] = "\t\n\0";
	int i;
	int j;

	i = ft_str_is_printable(str);
	j = ft_str_is_printable(str1);
	printf("%s = %d\n", str, i);
	printf("%s = %d\n", str1, j);
}
