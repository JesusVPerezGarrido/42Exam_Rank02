/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:48:01 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 12:51:06 by jeperez-         ###   ########.fr       */
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
		{
			if (argv[1][index] >= 'A' && argv[1][index] <= 'Z')
				argv[1][index] += 32;
			else if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
				argv[1][index] -= 32;
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
}
