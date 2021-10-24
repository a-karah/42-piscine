#include <stdio.h>

int	ft_any(char **tab, int(*f)(char*));

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char *tab[3] = {"hello", "world", NULL};
	printf("%d\n", ft_any(tab, &ft_strlen));
	return (0);
}
