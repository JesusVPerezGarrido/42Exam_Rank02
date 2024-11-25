/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeperez- <jeperez-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:04:45 by jeperez-          #+#    #+#             */
/*   Updated: 2024/11/25 13:09:31 by jeperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%i", atoi(argv[1]) + atoi(argv[3]));
		else if (argv[2][0] == '-')
			printf("%i", atoi(argv[1]) - atoi(argv[3]));
		else if (argv[2][0] == '*')
			printf("%i", atoi(argv[1]) * atoi(argv[3]));
		else if (argv[2][0] == '/')
			printf("%i", atoi(argv[1]) / atoi(argv[3]));
		else if (argv[2][0] == '%')
			printf("%i", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
}
