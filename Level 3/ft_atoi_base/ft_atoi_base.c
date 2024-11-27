/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:36:13 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 12:50:13 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	index;
	int	res;
	int	digit;
	int	sign;

	sign = 0;
	index = 0;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = 1;
		index++;
	}
	res = 0;
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
			digit = str[index] - '0';
		else
			digit = ft_toupper(str[index]) - 'A';
		res = (res * str_base) + digit;
		index++;
	}
	if (sign)
		return (-res);
	return (res);
}
