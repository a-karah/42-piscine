#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)())
{
	t_list	*curr;

	curr = begin_list;
	while (curr != NULL)
	{
		if ((*cmp)(curr -> data, data_ref) == 0)
			(*f)(curr -> data);
		curr = curr -> data;
	}
}
