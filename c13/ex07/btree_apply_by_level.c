#include "ft_btree.h"

int	btree_level_count(t_btree *root)
{
	if (root == NULL)
		return (0);
	return (1 + MAX(btree_level_count(root -> left), \
				btree_level_count(root -> right)));
}

void	btree_apply_by_level(t_btree *root,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
}
