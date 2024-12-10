#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		sorted;
	t_list	*operating;
	t_list	*placeholder;

	if (!lst)
		return (0);
	sorted = 0;
	while(!sorted)
	{
		operating = lst;
		sorted = 1;
		while (lst->next)
		{
			if (cmp(operating->data, operating->next->data))
			{
				sorted = 0;
				if (operating == lst)
					lst = operating->next;
				placeholder = operating->next->next;
				operating->next->next = operating;
				operating->next = placeholder;
			}
			operating = operating->next;
		}
	}
	return (lst);
}
