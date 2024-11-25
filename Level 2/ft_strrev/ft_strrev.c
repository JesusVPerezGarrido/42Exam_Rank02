/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:41:51 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:46:37 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrev(char *str)
{
	int		index;
	int		length;
	
	length = 0;
	while (str[length])
		length++;
	index = 0;
	while (length)
	{
		length--;
		str[index] = str[index] ^ str[length];
		str[length] = str[index] ^ str[length];
		str[index] = str[index] ^ str[length];
		index++;
	}
	return (str);
}
