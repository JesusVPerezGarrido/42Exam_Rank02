/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:18:57 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 17:24:16 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	hcd(int a, int b)
{
	int	hcd;
	int	lowest;
	int	num;
	
	lowest = a;
	if (b < a)
		lowest = b;
	num = 1;
	hcd = 1;
	while (num <= lowest)
	{
		if (!(num % a) && !(num % b))
			hcd = num;
		num++;
	}
	return (hcd);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%i", hcd(atoi(argv[1]), atoi(argv[1])));
	}
	printf("\n");
}
