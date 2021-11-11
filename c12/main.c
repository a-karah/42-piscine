#include <stdio.h>
#include "ft_list.h"

void	ft_show_list(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		printf("%s ", tmp -> data);
		tmp = tmp -> next;
	}
	printf("\n");
}

int	ft_strcmp(void *s1, void *s2)
{
	int	i;

	i = 0;
	while (((char *)s1)[i] != '\0' && ((char *)s2)[i] != '\0' && ((char *)s1)[i] == ((char *)s2)[i])
		i++;
	return (((char *)s1)[i] - ((char *)s2)[i]);
}

void	free_fct(void *data)
{
	free(data);
}

int	main(void)
{
	t_list *head;
	t_list *last;
	head = ft_create_elem("Hello");
	printf("add=%p next=%p data=%s\n", &head, head->next, head->data);
	ft_list_push_front(&head, "World");
	printf("add=%p next=%p data=%s\n", &head, head->next, head->data);
	printf("add=%p next=%p data=%s\n", head->next, head->next->next, head->next->data);
	ft_list_push_front(&head, "!");
	printf("size = %d\n", ft_list_size(&head));
	last = ft_list_last(&head);
	printf("add=%p next=%p data=%s\n", &last, last->next, last->data);
	ft_list_push_back(&head, "???");
	printf("add=%p next=%p data=%s\n", &last->next, last->next->next, last->next->data);
	char *strs[4] = {"hello", "my", "master", "desu"};
	t_list *str = ft_list_push_strs(4, strs);
	ft_show_list(str);
	//ft_list_clear(str, &free_fct);
	ft_list_reverse(&str);
	ft_show_list(str);
	printf("1 add = %p\n", ft_list_at(str, 4));
	char *sorting[5] = {"hello", "my", "master", "desu", "514"};
	t_list *sorte = ft_list_push_strs(5, sorting);
	ft_list_sort(&sorte, &ft_strcmp);
	ft_show_list(sorte);
	char *list2[] = {"cool", "grid", "bro"};
	t_list *sorte2 = ft_list_push_strs(3, list2);
	ft_sorted_list_merge(&sorte, sorte2, &ft_strcmp);
	ft_show_list(sorte);
	return (0);
}
