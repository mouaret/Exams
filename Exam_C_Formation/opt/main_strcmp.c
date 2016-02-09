/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:24:47 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 10:59:52 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int    ft_strcmp(char *s1, char *s2);

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(int n)
{
	long long n2;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar2('-');
		n2 = -n2;
	}
	if (n2 < 10)
		ft_putchar2(n2 + '0');
	else
	{
		ft_putnbr2(n2 / 10);
		ft_putnbr2(n2 % 10);
	}
}

int		main(int argc, char **argv)
{
	char *s1;
	char *s2;

	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		ft_putnbr2(ft_strcmp(s1, s2));
	}
	ft_putchar2('\n');
	return (0);
}
