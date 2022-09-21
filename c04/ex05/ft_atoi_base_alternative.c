int	ft_isspace(int c)
{
	return (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v');
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (-1);
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			++j;
		}
		++i;
	}
	if (i == 0 || i == 1)
		return (-1);
	return (i);
}

int	is_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	get_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	sign;
	int	base_int;

	i = 0;
	sign = 1;
	res = 0;
	base_int = check_base(base);
	if (base_int < 0)
		return (0);
	while (ft_isspace(str[i]))
		++i;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && is_in_base(base, str[i]))
	{
		res = base_int * res + get_index(base, str[i]);
		++i;
	}
	return (sign * res);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_atoi_base("FFjlkjlk", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-01010101jlkjlk", "01"));
	printf("%d\n", ft_atoi_base("144jlkjlk", "01234567"));
	printf("%d\n", ft_atoi_base("oyyjjjj", "poneyvif"));
	return (0);
}
