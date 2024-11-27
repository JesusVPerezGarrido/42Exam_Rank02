/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:52:00 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 16:59:10 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int start, int end)
{
	int	size;
	int	*range;
	int	num;

	size = start - end;
	if (size < 0)
		size = -size;
	range = malloc((size + 1) * sizeof(int));
	if (!range)
		return (0);
	num = end;
	size = 0;
	if (end < start)
		while (num <= start)
		{
			range[size] = num;
			size++;
			num++;
		}
	else
		while (num >= start)
		{
			range[size] = num;
			size++;
			num--;
		}
	return (range);
}
