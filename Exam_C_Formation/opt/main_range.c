/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:47:00 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:17:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int		ft_strcmp(char *s1, char *s2);
int		*ft_range(int start, int end);

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
	int s1;
	int s2;
	int *tab;
	int i;

	if (argc == 3)
	{
		s1 = atoi(argv[1]);
		ft_putchar2('@');
		ft_putnbr2(s1);
		ft_putchar2('\n');

		s2 = atoi(argv[2]);
		ft_putchar2('@');
		ft_putnbr2(s2);
		ft_putchar2('\n');

		tab = ft_range(s1, s2);
		if (tab)
		{
			i = 0;
			while (i < abs(s2 - s1))
			{
				ft_putnbr2(tab[i++]);
				ft_putchar2(' ');
			}
			ft_putnbr2(tab[i++]);
			ft_putchar2(' ');
		}
	}
	ft_putchar2('\n');
	return (0);
}
