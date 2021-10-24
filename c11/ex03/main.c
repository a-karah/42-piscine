#include <stdio.h>

int	ft_count_if(char **tab, int length, int(*f)(char*));

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char *tab[5] = {"hello", "", "world", "", "!"};

	printf("%d\n", ft_count_if(tab, 5, &ft_strlen));
	return (0);
}
