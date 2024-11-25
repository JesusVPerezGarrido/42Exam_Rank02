/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:28:58 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:34:22 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	s_index;
	int	r_index;
	
	s_index = 0;
	while (s[s_index])
	{
		r_index = 0;
		while (reject[r_index])
		{
			if (s[s_index] == reject[r_index])
				break ;
		}
		if (reject[r_index])
			break ;
		s_index++;
	}
	return (s_index);
}
