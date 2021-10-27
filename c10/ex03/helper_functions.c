#include "ft_hexdump.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	write(fd, s, i);
}

int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\r' || c == '\f' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(char *s)
{
	int	i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (is_space(s[i++]))
	if (s[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (sign * res);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	char	hex[8];
	int		n;

	base_len = ft_strlen(base);
	while (n > 0)
	{
		if (n > base_len)
		n = nbr / base_len;
	}
}
