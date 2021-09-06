#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}
