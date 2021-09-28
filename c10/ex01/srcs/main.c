#include "ft_cat.h"

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1 || (argv[1][0] == '-' && argv[1][1] == '\0'))
		read_from_stdin();
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			read_from_file(argv[i]);
			if (i < argc - 1)
				ft_putchar(STDOUT, '\n');
			i++;
		}
	}
	return (0);
}
