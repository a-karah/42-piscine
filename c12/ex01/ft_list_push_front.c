#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	temp = (t_list *) malloc(sizeof(t_list));
	temp -> next = *begin_list;
	temp -> data = data;
	*begin_list = temp;
}
