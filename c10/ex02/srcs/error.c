#include "ft_tail.h"

void	handle_error(char *fname)
{
	ft_putstr(STDERR, "ft_tail: ");
	ft_putstr(STDERR, fname);
	ft_putstr(STDERR, ": ");
	ft_putstr(STDERR, strerror(errno));
	ft_putchar(STDERR, '\n');
}
