/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:11:12 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:11:14 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_place(t_tab tab)
{
	int	min;
	int	i;
	int	j;

	min = tab.a[0];
	i = 0;
	j = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
		{
			j = i;
			min = tab.a[i];
		}
	}
	return (j);
}

int	ft_min(t_tab tab)
{
	int	min;
	int	i;

	min = tab.a[0];
	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
			min = tab.a[i];
	}
	return (min);
}

int	ft_min_2(t_tab tab)
{
	int	min_2;
	int	min;
	int	i;

	min_2 = INT_MAX;
	min = tab.a[0];
	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
		{
			min_2 = min;
			min = tab.a[i];
		}
		if (tab.a[i] < min_2 && tab.a[i] > min)
			min_2 = tab.a[i];
	}
	return (min_2);
}
