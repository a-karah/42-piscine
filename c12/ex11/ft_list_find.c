#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;

	curr = begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr -> data, data_ref) == 0)
			return (curr);
		curr = curr -> next;
	}
	return (NULL);
}
