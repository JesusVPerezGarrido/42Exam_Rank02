/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:13:17 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 12:23:07 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_toupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c);
	return (c - 32);
}

static int	ft_isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= '>'));
}

static void	print_repeat(char c, int num)
{
	while (num)
	{
		write(1, &c, 1);
		num--;
	}
}

static void	repeat_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (ft_isalpha(str[index]))
			print_repeat(str[index], ft_toupper(str[index]) - 'A' + 1);
		else
			write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	write(1, "\n", 1);
}
