/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:57:18 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:05:06 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

static char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

static void	rstr_capitalize(char *str)
{
	int		index;
	char	c;

	index = 0;
	while (str[index])
	{
		c = ft_tolower(str[index]);
		if (!str[index + 1] || str[index + 1] == ' ')
			c = ft_toupper(str[index]);
		write(1, &c, 1);
		index++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	index;
	
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	index = 1;
	while (index < argc)
		rstr_capitalize(argv[index]);
}
