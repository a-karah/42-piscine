#include "ft_list.h"

void	ft_swap(t_list *t1, t_list *t2)
{
	t_list *tmp;

	tmp = t1 -> data;
	t1 -> data = t2 -> data;
	t2 -> data = tmp -> data;
}

int	ft_size(t_list *t)
{
	t_list *tmp;
	int	i;

	i = 0;
	tmp = t;
	while (tmp != NULL)
	{
		tmp = tmp -> next;
		i++;
	}
	return (i);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*curr;
	int	size;
	int	i;

	if (curr || curr -> next)
	{
		size = ft_size(begin_list);
		while (size)
		{
			i = 0;
			curr = begin_list;
			while (i < size - 1)
			{
				ft_swap(curr, curr -> next);
				curr = curr -> next;
				i++;
			}
			size--;
		}
	}
}
