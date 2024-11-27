/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:57:18 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:08:28 by jeperez-         ###   ########.fr       */
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

static void	str_capitalize(char *str)
{
	int		index;
	int		apart;
	char	c;

	index = 0;
	apart = 1;
	while (str[index])
	{
		if (apart)
			c = ft_toupper(str[index]);
		else
			c = ft_tolower(str[index]);
		apart = 0;
		if (str[index] == ' ')
			apart = 1;
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
		str_capitalize(argv[index]);
}
