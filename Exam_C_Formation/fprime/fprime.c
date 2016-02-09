/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:26:49 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 12:38:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	prime2(int n)
{
	int i;
	int first;

	first = 1;
	i = 2;
	while (n > 1)
		if (n % i == 0)
		{
			if (!first)
				printf("*");
			printf("%d", i);
			first = 0;
			n /= i;
		}
		else
			i++;
}

int		main(int argc, char **argv)
{
	int n;

	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		else if (n > 1)
			prime2(n);
	}
	printf("\n");
	return (0);
}
