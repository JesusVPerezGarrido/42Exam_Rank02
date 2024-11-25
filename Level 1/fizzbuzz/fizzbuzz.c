/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:49:40 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 11:56:28 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	printnum(int num)
{
	char	c;

	if (num > 9)
	{
		printnum(num / 10);
	}
	c = num % 10 + 48;
	write(1, &c, 1);
}

int	main(void)
{
	int	num;

	num = 1;
	while (num < 101)
	{
		if (num % 3 && num % 5)
		{
			printnum(num);
		}
		if (num % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		if (num % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		write(1, "\n", 1);
		num++;
	}
}
