/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:29:10 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 12:40:26 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_rotated(char c)
{
	int	upper;

	if (c >= 'A' && c <= 'Z')
	{
		upper = 65;
		c -= 65;
	}
	else
	{
		upper = 97;
		c -= 97;
	}
	c = ((c + 13) % 26) + upper;
	write(1, &c, 1);
}

static int	ft_isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

static void	rotate_13(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (ft_isalpha(str[index]))
			print_rotated(str[index]);
		else
			write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotate_13(argv[1]);
	write(1, "\n", 1);
}
