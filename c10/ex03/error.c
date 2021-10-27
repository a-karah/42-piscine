#include "ft_hexdump.h"

void	handle_error(char *fname)
{
	ft_putstr("ft_hexdump: ", STDERR);
	ft_putstr(fname, STDERR);
	ft_putstr(": ", STDERR);
	ft_putstr(strerror(errno), STDERR);
	ft_putchar('\n', STDERR);
}
