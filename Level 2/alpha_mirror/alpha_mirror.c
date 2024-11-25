/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:52:38 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 12:59:48 by jeperez-         ###   ########.fr       */
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
			{
				argv[1][index] -= 65;
				argv[1][index] = 26 - argv[1][index];
				argv[1][index] += 65;
			}
			else if (argv[1][index] >= 'a' && argv[1][index] <= 'z')
			{
				argv[1][index] -= 97;
				argv[1][index] = 25 - argv[1][index];
				argv[1][index] += 97;
			}
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
}
