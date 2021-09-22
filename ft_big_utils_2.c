/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_utils_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:56:23 by adidion           #+#    #+#             */
/*   Updated: 2021/09/20 11:56:25 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_copy_tab(t_tab tab, int m, int size)
{
	int	*a;

	a = malloc(sizeof(int) * size);
	if (!a)
		ft_error(tab);
	m = -1;
	while (++m < size)
		a[m] = tab.a[m];
	return (a);
}

int	*ft_sort_int_tab(t_tab tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	*a;
	int	m;

	j = -1;
	m = -1;
	a = ft_copy_tab(tab, m, size);
	while (++j < size - 1)
	{
		i = -1;
		while (++i < size - 1)
		{
			if (a[i] > a[i + 1])
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
		}
	}
	return (a);
}

int	ft_find_mid(t_tab tab, int div)
{
	int	i;
	int	a;
	int	*sorted;

	i = -1;
	sorted = ft_sort_int_tab(tab, tab.ac_a);
	a = tab.ac_a / div;
	a = sorted[a - 1];
	free (sorted);
	return (a);
}

int	ft_place_b(t_tab tab)
{
	int	min;
	int	i;
	int	j;

	min = tab.b[0];
	i = 0;
	j = 0;
	while (--tab.ac_b)
	{
		i++;
		if (tab.b[i] > min)
		{
			j = i;
			min = tab.b[i];
		}
	}
	return (j);
}
