char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' < str[i] || str[i] > 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
