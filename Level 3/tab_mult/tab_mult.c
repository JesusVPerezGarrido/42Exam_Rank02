/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:08:46 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:12:54 by jeperez-         ###   ########.fr       */
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

static void	printnum(int num)
{
	char	c;

	if (num > 9)
		printnum(num / 10);
	c = (num % 10) + 48;
	write(1, &num, 1);
}

static void	print_tab(int nbr)
{
	int	mult;

	mult = 1;
	while (mult < 10)
	{
		printnum(mult);
		write(1, " x ", 3);
		printnum(nbr);
		write(1, " = ", 3);
		printnum(mult * nbr);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	print_tab(ft_atoi(argv[1]));
}
