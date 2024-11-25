/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:29:37 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:57:37 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inter(char *str1, char *str2)
{
	int	index;
	int	dup_index;
	int	print;

	index = 0;
	while (str1[index])
	{
		dup_index = 0;
		print = 0;
		while (!print && str2[dup_index])
		{
			if (str1[index] == str2[dup_index])
				print = 1;
			dup_index++;
		}
		if (print)
			write(1, &str1[index], 1);
		index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
