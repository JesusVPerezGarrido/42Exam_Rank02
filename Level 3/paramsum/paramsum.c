/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:42:57 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 16:45:20 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	print_nbr(unsigned int n)
{
	while (n > 9)
	{
		print_nbr(n / 10);
	}
	n = (n % 10) + '0';
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		print_nbr(argc - 1);
	}
	write(1, "\n", 1);
}
