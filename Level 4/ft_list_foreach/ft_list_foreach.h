/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:48:23 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:49:00 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_FOREACH_H
# define FT_LIST_FOREACH_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif
