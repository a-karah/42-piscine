#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../includes/header.h"

int	main(int argc, char *argv[])
{
	if (argc == 2 && !(input_error_handle(argv[1])))
	{
		if (!error_handle("numbers.dict"))
			control_func(argv[1], "numbers.dict", ft_strlen(argv[1]));
		else
			write(1, &"Dict Error\n", 12);
	}
	else if (argc == 3 && !(input_error_handle(argv[2])))
	{
		if (!error_handle(argv[1]))
			control_func(argv[2], argv[1], ft_strlen(argv[2]));
		else
			write(1, &"Dict Error\n", 12);
	}
	else
		write(1, "error\n", 5);
	return (0);
}
