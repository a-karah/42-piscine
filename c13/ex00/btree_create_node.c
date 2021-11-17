#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*elem;

	elem = (t_btree *) malloc(sizeof(t_btree));
	if (!elem)
		return (NULL);
	elem -> left = NULL;
	elem -> right = NULL;
	elem -> item = item;
	return (elem);
}
