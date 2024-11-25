/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:53:37 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:56:07 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n < 2)
		return (0);
	while (n > 2)
	{
		if (n % 2)
			return (0);
		n /= 2;
	}
	return (1);
}
