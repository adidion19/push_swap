/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:08:51 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:08:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	ft_little_2(t_tab tab, int min, int min_2)
{
	int	place;

	place = ft_place(tab);
	if (tab.a[1] == min || (tab.a[1] == min_2 && tab.a[0] != min))
		tab = ft_sort_bus(tab, "sa");
	if (place < tab.ac_a / 2)
		while (tab.a[0] != min && tab.a[0] != min_2)
			tab = ft_sort_bus(tab, "ra");
	else
		while (tab.a[0] != min && tab.a[0] != min_2)
			tab = ft_sort_bus(tab, "rra");
	return (tab);
}

t_tab	ft_little(t_tab tab)
{
	int	min;
	int	min_2;
	int	bool;

	bool = 0;
	min_2 = INT_MAX;
	while (tab.ac_a > 3 && ft_is_sort(tab) == 0)
	{
		min = ft_min(tab);
		if (bool == 0 && tab.ac_a > 4)
			min_2 = ft_min_2(tab);
		bool = 0;
		tab = ft_little_2(tab, min, min_2);
		if (min_2 == tab.a[0])
			bool = 1;
		tab = ft_sort_bus(tab, "pb");
		if (tab.b[0] < tab.b[1])
			tab = ft_sort_bus(tab, "sb");
	}
	tab = ft_three(tab);
	while (tab.ac_b)
		tab = ft_sort_bus(tab, "pa");
	return (tab);
}
