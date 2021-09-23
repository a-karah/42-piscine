#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../includes/header.h"

typedef struct s_file
{
	int	offset;
	int	fd;
}	t_file;

int	ft_atoi(char *str, int n)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	while (i < n)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_strcmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

int	jump_to_dict(int len, int file_d)
{
	char	ch;
	int		i;

	while (1)
	{
		while (1)
		{
			if (read(file_d, &ch, 1) < 0)
				return (0);
			if (ch == '1')
				break ;
		}
		i = 0;
		while (i < len - 1)
		{
			if (read(file_d, &ch, 1) < 0)
				return (0);
			if (ch != '0')
				break ;
			i++;
		}
		if (i == len - 1)
			break ;
	}
	return (1);
}
