/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 16:05:10 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 16:25:30 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

static void	rev_wstr(char *str)
{
	int	index;

	index = 0;
	while(str[index])
		index++;
	if (index)
		index--;
	while (index >= 0)
	{
		while (index >= 0 && !ft_isspace(str[index]))
			index--;
		index++;
		while (str[index] && !ft_isspace(str[index]))
		{
			write(1, &str[index], 1);
			index++;
		}
		write(1, " ", 1);
		index--;
		while (index >= 0 && !ft_isspace(str[index]))
			index--;
		index--;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
}
