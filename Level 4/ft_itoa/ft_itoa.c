/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:38:41 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:46:58 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	itoa_length(int nbr)
{
	int	length;

	if (nbr == -2147483648)
		return (11);
	length = 1;
	if (nbr < 0)
	{
		length++;
		nbr = -nbr;
	}
	while (nbr > 9)
	{
		length++;
		nbr /= 10;
	}
	return (length);
}
char	*ft_itoa(int nbr)
{
	char	*res;
	int		length;
	int		index;

	length = itoa_length(nbr);
	res = malloc((length + 1) * sizeof(char));
	if (!res)
		return (0);
	res[length] = 0;
	length--;
	if (nbr == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	if (nbr == 0)
	{
		res[0] = '0';
	}
	while (nbr)
	{
		res[length] = nbr % 10 + '0';
		nbr /= 10;
		length--;
	}
	return (res);
}
