/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_little_utils_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:11:06 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:11:08 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

int	ft_choose(int place, int place_2, t_tab tab)
{
	int	old;
	int	old_2;

	old = place;
	old_2 = place_2;
	if (place < tab.ac_a / 2)
		place = ft_abs(place - tab.ac_a);
	if (place_2 < tab.ac_a / 2)
		place_2 = ft_abs(place_2 - tab.ac_a);
	if (place < place_2)
		return (old);
	else
		return (old_2);
}

int	ft_is_sort(t_tab tab)
{
	int	i;

	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < tab.a[i - 1])
			return (0);
	}
	return (1);
}

int	ft_can_use(t_tab tab, int place, int min_2, int min_3)
{
	int	i;
	int	place_2;
	int	place_3;

	i = -1;
	while (tab.a[++i])
		if (min_2 == tab.a[i])
			place_2 = i;
	i = -1;
	while (tab.a[++i])
		if (min_3 == tab.a[i])
			place_3 = i;
	if (place < tab.ac_a / 2)
		if (place_2 > place_3)
			return (1);
	if (place > tab.ac_a / 2)
		if (place_2 < place_3)
			return (1);
	return (0);
}
