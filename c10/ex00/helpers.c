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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && *s2 != 0 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
