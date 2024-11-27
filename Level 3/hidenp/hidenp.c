/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:00:37 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 17:05:58 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	hidenp(const char *target, const char *pool)
{
	int	t_index;
	int	p_index;

	t_index = 0;
	p_index = 0;
	while (pool[p_index] && target[t_index])
	{
		if (pool[p_index] == target[t_index])
			t_index++;
		p_index++;
	}
	if (!target[t_index])
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		if (hidenp(argv[1], argv[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}
