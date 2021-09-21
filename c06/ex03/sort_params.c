#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strcmp(const char *a, const char *b)
{
    while (*a && *a == *b)
    {
        a++;
        b++;
    }
    return *a - *b;
}

void ft_sort_strings(int num, char **s)
{
    int i, j;
    for (i = 1; i < num; i++)
    {
        for (j = i; j > 0 && ft_strcmp(s[j-1], s[j]) > 0; j--)
        {
            char *temp = s[j-1];
            s[j-1] = s[j];
            s[j] = temp;
        }
    }
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		ft_sort_strings(argc - 1, argv + 1);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
