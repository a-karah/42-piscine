#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (root);
	if ((*cmpf)(root -> item, data_ref) == 0)
		return (root -> item);
	if ((*cmpf)(root -> item, data_ref) > 0)
		return (btree_search_item(root -> left, data_ref, cmpf));
	else
		return (btree_search_item(root -> right, data_ref, cmpf));
}
