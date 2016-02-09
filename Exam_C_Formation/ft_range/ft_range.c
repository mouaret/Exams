/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:42:40 by exam              #+#    #+#             */
/*   Updated: 2016/02/09 11:21:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int n;
	int i;
	int *tab;
	int direction;

	tab = 0;
	direction = +1;
	if (end < start)
		direction = -1;
	n = (end - start) * direction + 1;
	tab = malloc((n + 1) * sizeof(int));
	if (!tab)
		return (tab);
	i = 0;
	while (i < n)
	{
		tab[i] = start + i * direction;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
