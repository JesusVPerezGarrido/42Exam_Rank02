/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:17:55 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 15:25:16 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	num;
	int	index;
	int	sign;

	index = 0;
	while (str[index] && (str[index] == ' ' || (str[index] >= 9 &&
				str[index] <= 13)))
		index++;
	sign = 0;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = 1;
		index++;
	}
	num = 0;
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = (10 * num) + str[index] - '0';
		index++;
	}
	if (sign)
		return (-num);
	return (num);
}
