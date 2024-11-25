/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:43:07 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 12:46:27 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	index;

	if (argc == 4)
	{
		index = 0;
		while (argv[1][index])
		{
			if (argv[1][index] == argv[2][0])
				write(1, argv[3], 1);
			else
				write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
}
