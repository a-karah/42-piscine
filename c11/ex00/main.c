#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int nb)
{
	char	c;
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
		return ;
	}
	ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}

int	main(void)
{
	int tab[] = {1, 2, 34, 50, 9};
	ft_foreach(tab, 5, &ft_putnbr);
}
