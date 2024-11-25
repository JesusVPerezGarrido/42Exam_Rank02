/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:34:58 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:38:16 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*dup;

	index = 0;
	while (src[index])
		index++;
	dup = malloc(index + 1);
	if (!dup)
		return (0);
	index = 0;
	while (src[index])
	{
		dup[index] = src[index];
		index++;
	}
	dup[index] = 0;
	return (dup);
}
