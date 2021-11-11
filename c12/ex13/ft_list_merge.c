#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = *begin_list1;
	temp2 = begin_list2;
	while (temp1 -> next != NULL)
		temp1 = temp1 -> next;
	while (temp2 != NULL)
	{
		temp1 -> next = temp2;
		temp2 = temp2 -> next;
	}
}
