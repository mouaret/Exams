/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 12:47:35 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 13:39:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define	 size_t	 	unsigned int
#define	 printable(c)	 ((c>=32) && (c < 127) ? c : '.')

void    ft_putchar2(char c)
{
	    write(1, &c, 1);
}

void	saute_espace(int j)
{
	while (j < 16)
	{
		ft_putchar2(' ');
		ft_putchar2(' ');
		if (j && j % 2 == 0)
			ft_putchar2(' ');
		j++;
	}
}

void	print_bin(const void *addr, unsigned i, size_t size)
{
	int j;
	const void *p;
	unsigned char *c;
	char tab[16] = "0123456789abcdef";

	p = addr + i;
	j = 0;
	while (j < 16 && (i + j) < size)
	{
		if (j && (j % 2 == 0))
			ft_putchar2(' ');
		c = (unsigned char *)(p + j);
		ft_putchar2(tab[*c / 16]);
		ft_putchar2(tab[*c % 16]);
		j++;
	}
	saute_espace(j);
}

void	print_dump(const void *addr, unsigned i, size_t size)
{
	int j;
	const void *p;
	unsigned char *c;

	p = addr + i;
	j = 0;
	while (j < 16 && (i + j) < size)
	{
		c = (unsigned char *)(p + j);
		ft_putchar2(printable(*c));
		j++;
	}
}

void    print_memory(const void *addr, size_t size)
{
	unsigned int i;

	i = 0;
	while (addr && i < size)
	{
		print_bin(addr, i, size);
		ft_putchar2(' ');
		print_dump(addr, i, size);
		ft_putchar2('\n');
		i += 16;
	}
}
