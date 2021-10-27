#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	i;
	t_list	*temp;
	t_list	*head;

	if (size <= 0)
		return (NULL);
	i = size;
	head = ft_create_elem(strs[--i]);
	temp = head;
	while (--i >= 0)
	{
		temp -> next = ft_create_elem(strs[i]);
		temp = temp -> next;
	}
	return (head);
}
