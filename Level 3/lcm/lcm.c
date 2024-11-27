/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:08:12 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 17:15:55 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	a_mult;
	int	b_mult;

	if (!a || !b)
		return (0);
	a_mult = 1;
	b_mult = 1;
	while (a_mult * a != b_mult * b)
	{
		if (a_mult * a < b_mult * b)
			a_mult++;
		else
			b_mult++;
	}
	return (a_mult * a);
}
