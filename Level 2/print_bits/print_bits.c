/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:05:15 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 14:10:47 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	moves;

	moves = 0;
	while (moves < 8)
	{
		if ((octet>>moves)&0x1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		byte /= 2;
	}
}
