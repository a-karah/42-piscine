#include <unistd.h>
void ft_putnbr(int nb);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr(20);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-1100);
	ft_putchar('\n');
	ft_putnbr(12121);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(-2147483647);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(42);

	return 0;
}
