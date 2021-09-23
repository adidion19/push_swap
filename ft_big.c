/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:52:42 by adidion           #+#    #+#             */
/*   Updated: 2021/09/20 11:52:43 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	ft_big_4(t_tab tab, int min, int min_2, int place)
{
	if (min_2 != tab.a[0] && min_2 != tab.a[1] && tab.ac_b > 4)
		min_2 = ft_min_2_b(tab);
	if ((tab.b[1] == min || (tab.b[1] == min_2 && tab.b[0] != min))
		&& (tab.a[0] > tab.a[1]))
		tab = ft_sort_bus(tab, "ss");
	else if (tab.a[0] > tab.a[1])
		tab = ft_sort_bus(tab, "sa");
	if (tab.b[1] == min || (tab.b[1] == min_2 && tab.b[0] != min))
		tab = ft_sort_bus(tab, "sb");
	if (place < tab.ac_b / 2)
		while (tab.b[0] != min && tab.b[0] != min_2)
			tab = ft_sort_bus(tab, "rb");
	else
		while (tab.b[0] != min && tab.b[0] != min_2)
			tab = ft_sort_bus(tab, "rrb");
	tab = ft_sort_bus(tab, "pa");
	return (tab);
}

t_tab	ft_big_3(t_tab tab, int min, int min_2, int place)
{
	if (tab.a[1] == min || (tab.a[1] == min_2 && tab.a[0] != min))
		tab = ft_sort_bus(tab, "sa");
	if (place < tab.ac_a / 2)
		while (tab.a[0] != min && tab.a[0] != min_2)
			tab = ft_sort_bus(tab, "ra");
	else
		while (tab.a[0] != min && tab.a[0] != min_2)
			tab = ft_sort_bus(tab, "rra");
	tab = ft_sort_bus(tab, "pb");
	if (tab.b[0] < tab.b[1])
		tab = ft_sort_bus(tab, "sb");
	return (tab);
}

t_tab	ft_big_2(t_tab tab, int div)
{
	int	ac_a;
	int	mid;

	div++;
	while (--div > 1)
	{
		mid = ft_find_mid(tab, div);
		ac_a = tab.ac_a;
		ac_a--;
		while (ac_a--)
		{
			while ((tab.a[0] <= mid && tab.ac_a > 1))
			{
				tab = ft_sort_bus(tab, "pb");
				if (tab.b[0] < tab.b[1] && tab.a[0] > tab.a[1])
					tab = ft_sort_bus(tab, "ss");
				if (ac_a > 0)
					ac_a--;
			}
			tab = ft_sort_bus(tab, "ra");
		}
	}
	return (tab);
}

t_tab	ft_big(t_tab tab, int div)
{
	int	min_2;
	int	min;
	int	place;

	tab = ft_big_2(tab, div);
	while (tab.ac_a > 3 && ft_is_sort(tab) == 0)
	{
		min = ft_min(tab);
		place = ft_place(tab);
		if (min_2 != tab.b[0] && min_2 != tab.b[1] && tab.ac_a > 4)
			min_2 = ft_min_2(tab);
		tab = ft_big_3(tab, min, min_2, place);
	}
	tab = ft_three(tab);
	while (tab.ac_b)
	{
		min = ft_min_b(tab);
		place = ft_place_b(tab);
		if (min_2 != tab.a[0] && min_2 != tab.a[1] && tab.ac_b > 4)
			min_2 = ft_min_2_b(tab);
		tab = ft_big_4(tab, min, min_2, place);
	}
	if (tab.a[0] > tab.a[1])
		tab = ft_sort_bus(tab, "sa");
	return (tab);
}
