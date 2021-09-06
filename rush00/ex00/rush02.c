void	ft_putchar(char c);

void	write_char(int s, char c)
{
	int	i;

	i = 0;
	while (i < s)
	{
		ft_putchar(c);
		i++;
	}
}

void	first_line(int x)
{
	ft_putchar('A');
	write_char(x - 2, 'B');
	if (x > 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	end_line(int x)
{
	ft_putchar('C');
	write_char(x - 2, 'B');
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	iy;

	iy = 0;
	if (1 > y || 1 > x)
		return ;
	first_line(x);
	while (iy < y - 2)
	{
		ft_putchar('B');
		write_char(x - 2, ' ');
		if (x > 1)
			ft_putchar('B');
		iy++;
		ft_putchar('\n');
	}
	if (y > 1)
		end_line(x);
}
