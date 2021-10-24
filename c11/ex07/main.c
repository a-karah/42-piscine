#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}


int	main(void)
{
	char *tab[5] = {"world", "hello", "123", "haha", NULL};

	for (int i = 0; i < 5; i++)
		printf("%s ", tab[i]);
	printf("\n");
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	for (int i = 0; i < 5; i++)
		printf("%s ", tab[i]);
	return (0);
}
