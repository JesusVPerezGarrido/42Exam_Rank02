/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:38:35 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:40:53 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *str, const char *accept)
{
	int	s_index;
	int	a_index;

	s_index = 0;
	while (str[s_index])
	{
		a_index = 0;
		while (accept[a_index])
		{
			if (str[s_index] == accept[a_index])
				return (str + s_index);
			a_index++;
		}
		s_index++;
	}
	return (0);
}
