#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;
	t_list	*last;

	temp = ft_create_elem(data);
	while (last -> next != NULL)
		last = last -> next;
	temp -> data = data;
	last -> next = temp;
}
