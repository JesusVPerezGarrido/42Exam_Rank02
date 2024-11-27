/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:52:00 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 16:59:05 by jeperez-         ###   ########.fr       */
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
	num = start;
	size = 0;
	if (start < end)
		while (num <= end)
		{
			range[size] = num;
			size++;
			num++;
		}
	else
		while (num >= end)
		{
			range[size] = num;
			size++;
			num--;
		}
	return (range);
}
