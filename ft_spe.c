/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:17:29 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:17:31 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(t_tab tab)
{
	if (tab.a)
		free(tab.a);
	if (tab.b)
		free(tab.b);
	write(2, "Error\n", 6);
	exit(1);
}

t_tab	ft_two(t_tab tab)
{
	if (tab.a[0] > tab.a[1])
		tab = ft_sort_bus(tab, "sa");
	return (tab);
}

t_tab	ft_three(t_tab tab)
{
	if (tab.a[0] > tab.a[1] && tab.a[0] > tab.a[2])
		tab = ft_sort_bus(tab, "ra");
	if (tab.a[0] < tab.a[2] && tab.a[2] < tab.a[1])
		tab = ft_sort_bus(tab, "rra");
	if (tab.a[0] > tab.a[1])
		tab = ft_sort_bus(tab, "sa");
	if (tab.a[0] > tab.a[2])
		tab = ft_sort_bus(tab, "rra");
	return (tab);
}
