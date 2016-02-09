/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:10:40 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 10:16:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char c)
{
	write(1, &c, 1);
}

int		ft_strlen2(char *str)
{
	int nb;
	char *s;

	nb = 0;
	s = str;
	while (*s++)
		nb++;
	return (nb);
}

int		main(int argc, char **argv)
{
	int n;

	if (argc == 2)
	{
		n = ft_strlen2(argv[1]);
		while (--n >= 0)
			ft_putchar2(argv[1][n]);
	}
	ft_putchar2('\n');
	return (0);
}
