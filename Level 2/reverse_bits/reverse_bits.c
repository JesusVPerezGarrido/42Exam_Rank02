/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:47:33 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 14:04:20 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	result;
	int				moves;
	
	result = 0;
	moves = 0;
	while (moves < 8)
	{
		result += ((octet>>moves)&0x01)<<(7 - moves);
		moves++;
	}
	return (result);
}
