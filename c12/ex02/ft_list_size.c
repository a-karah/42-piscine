#include "ft_list.h"

int	ft_list_size(t_list **begin_list)
{
	int	count;
	t_list *temp;

	count = 0;
	temp = *begin_list;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
