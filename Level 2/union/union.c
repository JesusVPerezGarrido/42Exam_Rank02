/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:29:37 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 13:39:25 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int	index;
	int	traceback;
	int	print;

	index = 0;
	while (str1[index])
	{
		traceback = index;
		print = 1;
		while (print && traceback)
		{
			traceback--;
			if (str1[index] == str1[traceback])
				print = 0;
		}
		if (print)
			write(1, &str1[index], 1);
		index++;
	}
	index = 0;
	while (str2[index])
	{
		traceback = index;
		print = 1;
		while (print && traceback)
		{
			traceback--;
			if (str2[index] == str2[traceback])
				print = 0;
		}
		traceback = 0;
		while (print && str1[traceback])
		{
			if (str1[traceback] == str2[index])
				print = 0;
			traceback++;
		}
		if (print)
			write(1, &str2[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
