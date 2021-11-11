#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*curr;
	t_list	*new;

	curr = *begin_list;
	new = ft_create_elem(data);
	if (curr)
	{
		while (curr -> next && (cmp(curr -> next -> data, data) <= 0))
			curr = curr -> next;
		new -> next = curr -> next;
		curr -> next = new;
	}
	else
		*begin_list = new;
}
