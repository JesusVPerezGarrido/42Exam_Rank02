/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:28:58 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:49:38 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *accept)
{
	int	s_index;
	int	a_index;
	int	match;

	s_index = 0;
	match = 1;
	while (match && s[s_index])
	{
		a_index = 0;
		match = 0;
		while (!match && accept[a_index])
		{
			if (s[s_index] == accept[a_index])
				match = 1;
			a_index++;
		}
		s_index++;
	}
	return (s_index);
}
