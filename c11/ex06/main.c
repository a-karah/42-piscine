#include <stdio.h>

void	ft_sort_string_tab(char **tab);

int	main(void)
{
	char *tab[5] = {"world", "hello", "123", "haha", NULL};

	for (int i = 0; i < 5; i++)
		printf("%s ", tab[i]);
	printf("\n");
	ft_sort_string_tab(tab);
	for (int i = 0; i < 5; i++)
		printf("%s ", tab[i]);
	return (0);
}
