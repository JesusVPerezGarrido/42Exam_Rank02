/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:03:36 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 11:14:39 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	main(int argc, char **argv)
{
	int	apart;
	int	index;

	if (argc != 2)
	{
		apart = 0;
		index = 0;
		while (argv[1][index])
		{
			if (!ft_isspace(argv[1][index]))
			{
				apart = 0;
				write(1, &argv[1][index], 1);
			}
			else if (!apart)
			{
				apart = 1;
				write(1, "   ", 3);
			}
			index++;
		}
	}
	write(1, "\n", 1);
}
