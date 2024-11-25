/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:42:07 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 13:45:40 by jeperez-         ###   ########.fr       */
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
			if (argv[1][index] == '_')
			{
				index++;
				argv[1][index] -= 32;
			}
			write(1, &argv[1][index], 1);
			index++;
		}
	}
	write(1, "\n", 1);
}
