#include "ft_display.h"

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(fd, s[i]);
		i++;
	}
}
