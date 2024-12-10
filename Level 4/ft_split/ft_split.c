/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 15:14:15 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 15:29:24 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

static int	word_count(char *str)
{
	int	count;
	int	apart;
	int	index;

	index = 0;
	apart = 1;
	count = 0;
	while (str[index])
	{
		if (!ft_isspace(str[index]))
		{
			if (apart)
				count++;
			apart = 0;
		}
		else
			apart = 1;
		index++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	int		split_count;
	int		split_index;
	int		str_index;
	int		subsplit_index;
	char	**split;

	split_count = word_count(str);
	split = malloc((split_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split_index = 0;
		str_index = 0;
	while (split_index < split_count)
	{
		subsplit_index = 0;
		while (ft_isspace(str[str_index]))
			str_index++;
		while (!ft_isspace(str[str_index + subsplit_index]))
			subsplit_index++;
		split[split_index] = malloc((subsplit_index + 1) * sizeof(char));
		if (!split[split_index])
		{
			while (split_index)
				free(split[--split_index]);
			free(split);
			return (NULL);	
		}
		subsplit_index = 0;
		while (!ft_isspace(str[str_index + subsplit_index]))
		{
			split[split_index][subsplit_index] = str[str_index + subsplit_index];
			subsplit_index++;
		}
		split[split_index][subsplit_index] = 0;
		str_index += subsplit_index;
		split_index++;
	}
	split[split_index] = 0;
	return (split);
}
