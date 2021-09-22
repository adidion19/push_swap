/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_bus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:51:04 by adidion           #+#    #+#             */
/*   Updated: 2021/09/20 11:51:06 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_repetiton(t_tab tab)
{
	int	i;
	int	j;

	i = -1;
	while (++i < tab.ac_a - 1)
	{
		j = i;
		while (++j < tab.ac_a)
		{
			if (tab.a[i] == tab.a[j])
				return (1);
		}
	}
	return (0);
}

t_tab	ft_algo_bus(t_tab tab)
{
	if (ft_repetiton(tab) == 1)
		ft_error(tab);
	if (ft_is_sort(tab) == 1)
		return (tab);
	if (tab.ac_a == 2)
		tab = ft_two(tab);
	else if (tab.ac_a < 2)
		ft_error(tab);
	else if (tab.ac_a == 3)
		tab = ft_three(tab);
	else if (tab.ac_a < 70)
		tab = ft_little(tab);
	else if (tab.ac_a < 200)
		tab = ft_big(tab, 4);
	else
		tab = ft_big(tab, 9);
	return (tab);
}
