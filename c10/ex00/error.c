#include "ft_display.h"

void	handle_error(int e)
{
	if (e == 1)
		ft_putstr(STDERR, "File name missing.\n");
	else if (e == 2)
		ft_putstr(STDERR, "Too many arguments.\n");
	else if (e == 3)
		ft_putstr(STDERR, "Cannot read file.\n");
}
