/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:14:01 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 14:21:05 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	if (argc == 2)
	{
		index = 0;
		while (argv[1][index])
			index++;
		index--;
		while (index && argv[1][index] == ' ')
			index--;
		while (index && argv[1][index] != ' ')
			index--;
		if (argv[1][index] == ' ')
			index++;
		while (argv[1][index] && argv[1][index] != ' ')
		{
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
}
