#include <stdio.h>
#include <unistd.h>
#include "ft_btree.h"

int	ft_strcmp(void *s1, void *s2)
{
	while (*(char *)s1 != 0 && *(char *)s2 != 0 && *(char *)s1 == *(char *)s2)
	{
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}

void	ft_putstr(void *s)
{
	int	i;

	i = 0;
	while (((char *)s)[i] != '\0')
		i++;
	write(1, s, i);
	write(1, "\n", 1);
}

int	main(void)
{
	t_btree	*root;
	char *res;

	root = NULL;
	btree_insert_data(&root, "hi", ft_strcmp);
	btree_insert_data(&root, "wordl", ft_strcmp);
	btree_insert_data(&root, "324", ft_strcmp);
	btree_insert_data(&root, "34", ft_strcmp);
	btree_insert_data(&root, "12", ft_strcmp);
	btree_insert_data(&root, "24", ft_strcmp);
	btree_insert_data(&root, "4", ft_strcmp);
	btree_insert_data(&root, "olol", ft_strcmp);
	btree_apply_infix(root, ft_putstr);
	res = btree_search_item(root, "4", ft_strcmp);
	printf("found %s\n", res);
	printf("size: %d\n", btree_level_count(root));
	return (0);
}
