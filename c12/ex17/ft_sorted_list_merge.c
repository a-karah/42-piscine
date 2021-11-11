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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
		int (*cmp)())
{
	t_list *curr;

	if (*begin_list1)
	{
		if (begin_list2)
		{
			curr = *begin_list1;
			while (curr -> next)
				curr = curr -> next;
			curr -> next = begin_list2;
			ft_list_sort(begin_list1, cmp);
		}
	}
	else if (begin_list2)
		*begin_list1 = begin_list2;
}
