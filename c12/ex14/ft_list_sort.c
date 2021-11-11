#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *iter;
	t_list *curr;
	void *temp;

	iter = *begin_list;
	while (iter != NULL)
	{
		curr = *begin_list;
		while (curr -> next != NULL)
		{
			if ((*cmp)(curr -> data, curr -> next -> data) > 0)
			{
				temp = curr -> data;
				curr -> data = curr -> next -> data;
				curr -> next -> data = temp;
			}
			curr = curr -> next;
		}
		iter = iter->next;
	}
}
