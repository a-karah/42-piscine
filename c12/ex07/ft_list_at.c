#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int	i;
	t_list	*temp;

	i = 0;
	temp = begin_list;
	if (nbr < 0)
		return (NULL);
	while (i < nbr && temp != NULL)
	{
		temp = temp -> next;
		i++;
	}
	return (temp);
}
