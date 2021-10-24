#include <stdio.h>

int	*ft_map(int *tab, int length, int(*f)(int));

int	ft_sqr(int nb)
{
	return (nb * nb);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int *ret_tab;

	ret_tab = ft_map(tab, 5, &ft_sqr);
	for (int i = 0; i < 5; i++)
		printf("%2d ", tab[i]);
	printf("\n");
	for (int i = 0; i < 5; i++)
		printf("%2d ", ret_tab[i]);
	return (0);
}
