#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*curr;

	curr = begin_list;
	while (curr != NULL)
	{
		(*f)(curr -> data);
		curr = curr -> next;
	}
}
