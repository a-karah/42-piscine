#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "../includes/header.h"

int	begin_func(int *len_s, char **str, char *file_name)
{
	if (*len_s == 3)
	{
		if (**str != '0')
		{
			if (!send_number(1, *str, file_name))
				return (0);
			if (!send_number(3, *str, file_name))
				return (0);
			(*str)++;
			(*len_s)--;
		}
		else
		{
			(*str)++;
			(*len_s)--;
		}
	}
	return (1);
}

int	end_func(int *len_s, char **str, char *fname)
{
	if (*len_s == 2)
	{
		if (**str != '0')
		{
			if (!send_number(2, *str, fname))
				return (0);
			if (**str >= '2')
			{
				(*str)++;
				if (**str != '0')
					if (!send_number(1, *str, fname))
						return (0);
			}
			return (1);
		}
		(*str)++;
		(*len_s)--;
	}
	if (*len_s == 1 && **str != '0')
		if (!send_number(1, *str, fname))
			return (0);
	return (1);
}

int	number_func(int line_s, char *str, char *file_name)
{
	if (!begin_func(&line_s, &str, file_name))
		return (0);
	if (!end_func(&line_s, &str, file_name))
		return (0);
	return (1);
}

int	control_func(char *arg, char *file_name, int len)
{
	if (ft_atoi(arg, len) == 0)
		write(1, "zero", 4);
	if (len % 3)
	{
		number_func(len % 3, arg, file_name);
		if (len / 3 > 0 && ft_atoi(arg, len % 3))
			send_number(len - len % 3 + 1, arg, file_name);
		arg += len % 3;
		len -= len % 3;
	}
	while (len > 0)
	{
		number_func(3, arg, file_name);
		if (len == 0)
			break ;
		if (ft_atoi(arg, 3) && len > 3)
			send_number(len - 2, arg, file_name);
		len -= 3;
		arg += 3;
	}
	write(1, "\n", 1);
	return (1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
