/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 10:48:07 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 11:03:10 by jeperez-         ###   ########.fr       */
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

static int	isprime(int nbr)
{
	int num;

	num = 2;
	if (nbr < 2)
		return (0);
	while (num * num <= nbr)
	{
		if (num % nbr == 0)
			return (0);
		num++;
	}
	return (1);
}

static void	printnum(int num)
{
	char	c;

	if (num > 9)
		printnum(num / 10);
	c = (num % 10) + 48;
	write(1, &num, 1);
}

static void	add_prime_sum(int nbr)
{
	int	num;
	int	index;

	num = 0;
	index = 2;
	while (index < nbr)
	{
		if (isprime(index))
			num += index;
		index++;
	}
	printnum(num);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "0", 1);
		return (0);
	}
	add_prime_sum(ft_atoi(argv[1]));
		write(1, "\n", 1);
}
