#include "ft_display.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		handle_error(1);
	else if (argc == 2)
	{
		ft_putstr(STDOUT, argv[1]);
	}
	else if (argc > 2)
		handle_error(2);
	ft_putchar(STDOUT, '\n');
	return (0);
}
