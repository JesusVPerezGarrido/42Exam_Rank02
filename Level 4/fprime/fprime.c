/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:30:12 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/27 13:37:02 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void	fprime(int nbr)
{
	int	num;

	if (nbr == 1)
	{
		printf("1\n");
		return ;
	}
	num = 2;
	while (nbr > 1)
	{
		if (!(nbr % num))
		{
			printf("%i", num);
			if (nbr != num)
				printf("*");
			nbr /= num;
		}
		else
			num++;
	}
	printf("\n");
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (1);
	}
	fprime(atoi(argv[1]));
}
