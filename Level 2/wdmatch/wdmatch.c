/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:22:29 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 13:28:56 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	wdmatch(char *target, char *pool)
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
		write(1, target, t_index);
}

int	main(int argc,char **argv)
{
	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
