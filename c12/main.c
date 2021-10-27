#include <stdio.h>
#include "ft_list.h"

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
	t_list *temp = str;
	while (temp != NULL)
	{
		printf("add = %p next = %p data = %s\n", temp, temp->next, temp->data);
		temp = temp->next;
	}
	ft_list_clear(str, &free_fct);
	printf("add = %p next = %p data = %s\n", str, str->next, str->data);
	return (0);
}
