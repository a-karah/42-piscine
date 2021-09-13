#include <unistd.h>
/*
void	ft_print_address(char *p)
{
}
*/
void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	char	*p;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	p = (char *) addr;
	while (i < size)
	{
		j = 0;
		while (j < 16 && i + j < size)
		{
			write(1, p + i + j, sizeof(p));
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			write(1, &hex[(*(p + i + j) / 16) % 16], 1);
			write(1, &hex[(*(p + i + j) % 16)], 1);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		while (j < 16)
		{
			write(1, " ", 1);
			if (j % 2)
				write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < 16 && i + j < size)
		{
			if (*(p + i + j) > 31 && *(p + i + j) < 127)
				write(1, p + i + j, 1);
			else
				write(1, ".", 1);
			j++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}
