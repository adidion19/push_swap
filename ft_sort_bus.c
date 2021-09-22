/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_bus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:22:54 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:22:58 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

t_tab	ft_sort_bus(t_tab tab, char *type)
{
	if (ft_strncmp("rrr", type, 3) == 0)
		tab = ft_rrr(tab);
	else if (ft_strncmp("rra", type, 3) == 0)
		tab.a = ft_rra(tab.ac_a, tab.a, 1);
	else if (ft_strncmp("rrb", type, 3) == 0)
		tab.b = ft_rrb(tab.ac_b, tab.b, 1);
	else if (ft_strncmp("pa", type, 2) == 0)
		tab = ft_pa(tab);
	else if (ft_strncmp("pb", type, 2) == 0)
		tab = ft_pb(tab);
	else if (ft_strncmp("rr", type, 2) == 0)
		tab = ft_rr(tab);
	else if (ft_strncmp("ra", type, 2) == 0)
		tab.a = ft_ra(tab.ac_a, tab.a, 1);
	else if (ft_strncmp("rb", type, 2) == 0)
		tab.b = ft_rb(tab.ac_b, tab.b, 1);
	else if (ft_strncmp("sa", type, 2) == 0)
		tab.a = ft_sa(tab.ac_a, tab.a);
	else if (ft_strncmp("sb", type, 2) == 0)
		tab.b = ft_sb(tab.ac_b, tab.b);
	else if (ft_strncmp("ss", type, 2) == 0)
		tab = ft_ss(tab);
	return (tab);
}
