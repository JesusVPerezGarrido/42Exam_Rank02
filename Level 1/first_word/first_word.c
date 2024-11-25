/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:42:25 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 11:48:37 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isspace(char c)
{
	return (c == 32 || c >=9 && c <= 13);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		while (argv[1][0] && ft_isspace(argv[1][0]))
		{
			argv[1]++;
		}
		while (argv[1][0] && !ft_isspace(argv[1][0]))
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
