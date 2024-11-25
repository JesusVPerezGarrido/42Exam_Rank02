/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:25:01 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 12:27:14 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*rev_print(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	while (len)
	{
		len--;
		write(1, &str[len], 1);
	}
	write(1, "\n", 1);
}
