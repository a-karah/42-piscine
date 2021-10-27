#include "ft_hexdump.h"

int	main(int argc, char *argv[])
{
	if (argc == 3 && argv[1][0] == '-' && argv[1][1] == 'C')
	{
		ft_hexdump(argv[2]);
	}
	return (0);
}
