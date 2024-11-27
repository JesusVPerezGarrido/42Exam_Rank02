/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:51:41 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 12:56:41 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_atoi(char *nptr)
{
	int	res;
	int	index;

	res = 0;
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		res = (10 * res) + (nptr[index] - 48);
		index++;
	}
	return (res);
}

static void	print_hex(int nbr)
{
	char	c;

	while (nbr > 15)
		print_hex(nbr / 16);
	if (nbr % 16 <= 9)
		c = nbr % 16 + '0';
	else
		c = nbr % 16 + 'A';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}
