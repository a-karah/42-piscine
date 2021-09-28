#include "ft_cat.h"

void	handle_error(char *fname)
{
	ft_putstr(STDERR, "ft_cat: ");
	ft_putstr(STDERR, fname);
	ft_putstr(STDERR, ": ");
	ft_putstr(STDERR, strerror(errno));
	ft_putchar(STDERR, '\n');
}
