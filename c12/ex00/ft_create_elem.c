#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *temp;

	temp = (t_list *) malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp -> next = NULL;
	temp -> data = data;
	return (temp);
}
