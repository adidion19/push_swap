/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_utils_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:56:12 by adidion           #+#    #+#             */
/*   Updated: 2021/09/20 11:56:17 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min_b(t_tab tab)
{
	int	min;
	int	i;

	min = tab.b[0];
	i = 0;
	while (--tab.ac_b)
	{
		i++;
		if (tab.b[i] > min)
			min = tab.b[i];
	}
	return (min);
}

int	ft_min_2_b(t_tab tab)
{
	int	min_2;
	int	min;
	int	i;

	min_2 = tab.b[0];
	min = tab.b[0];
	i = 0;
	while (--tab.ac_b)
	{
		i++;
		if (tab.b[i] > min)
		{
			min_2 = min;
			min = tab.b[i];
		}
		if (tab.b[i] > min_2 && tab.b[i] < min)
			min_2 = tab.b[i];
	}
	return (min_2);
}

int	ft_find_rotate(t_tab tab, int mid)
{
	int	ac_1;
	int	i;

	i = 0;
	ac_1 = tab.ac_a;
	while (1)
	{
		if (tab.a[++i] <= mid)
			return (1);
		if (tab.a[--ac_1] <= mid)
			return (0);
	}
}
