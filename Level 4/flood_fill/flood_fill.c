/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:23:37 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:29:40 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	if (begin.x < 0 || begin.x >= size.x)
		return ;
	if (begin.y < 0 || begin.y >= size.x)
		return ;
	if (tab[begin.y][begin.x] == 'F')
		return ;
	begin.x -= 1;
	flood_fill(tab, size, begin);
	begin.x += 2;
	flood_fill(tab, size, begin);
	begin.x -= 1;
	begin.y -= 1;
	flood_fill(tab, size, begin);
	begin.y += 2;
	flood_fill(tab, size, begin);
}
