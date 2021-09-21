#include <stdio.h>
#include <unistd.h>
void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(100, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(100, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-32, "01");
	write(1, "\n", 1);
	ft_putnbr_base(32, "poneyvif");
	return 0;
}
