/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:11:15 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 14:13:19 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, int len)
{
	int	index;
	int	lowest;

	if (!tab || !len)
		return (0);
	lowest = tab[0];
	index = 1;
	while (index < len)
	{
		if (tab[index] < lowest)
			lowest = tab[index];
		index++;
	}
	return (lowest);
}
