#include <stdio.h>
#include <unistd.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char *base = "0123456789";
	char *base16 = "0123456789ABCDEF";
	char *base2 = "01";

	printf("%d\n", ft_atoi_base("100Hello", base));
	printf("%d\n", ft_atoi_base("100Hello", base16));
	printf("%d\n", ft_atoi_base("100Hello", base2));
	return 0;
}
