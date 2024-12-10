/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:48:23 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 14:01:09 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_remove_if.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*previous;
	t_list	*placeholder;

	if (begin_list == 0 || *begin_list == 0)
		return ;
	current = *begin_list;
	while (current)
	{
		if (!(*cmp)(current->data, data_ref))
		{
			placeholder = current;
			if (*begin_list == current)
				*begin_list = current->next;
			else
				previous->next = current->next;
			current = current->next;
			free(placeholder);
		}
		else
		{
			previous = current;
			current = current->next;
		}
	}
}
