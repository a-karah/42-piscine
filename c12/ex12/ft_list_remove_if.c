#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *curr;
    t_list *prev;

    curr = *begin_list;
    prev = NULL;
    while (curr != NULL)
    {
        if ((*cmp)(curr -> data, data_ref) == 0)
        {
            if (prev == NULL)
            {
                *begin_list = (*begin_list) -> next;
                (*free_fct)(curr);
                curr = *begin_list;
            }
            else
            {
                prev -> next = curr -> next;
                (*free_fct)(curr);
                curr = prev -> next;
            }
            continue ;
        }
        prev = curr;
        curr = curr -> next;
    }
}