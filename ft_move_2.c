/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:24:32 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:24:33 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_ra(int ac, int *a, int bool)
{
	int	j;
	int	i;
	int	swap;
	int	swap_2;

	j = -1;
	while (++j < ac)
		;
	i = j;
	swap = a[j];
	while (j-- > 0)
	{
		swap_2 = swap;
		swap = a[j];
		a[j] = swap_2;
	}
	j--;
	a[i - 1] = swap;
	if (bool == 1)
		write(1, "ra\n", 3);
	return (a);
}

t_tab	ft_rr(t_tab tab)
{
	tab.a = ft_ra(tab.ac_a, tab.a, 0);
	tab.b = ft_rb(tab.ac_b, tab.b, 0);
	write(1, "rr\n", 3);
	return (tab);
}

int	*ft_rrb(int ac, int *a, int bool)
{
	int	j;
	int	i;
	int	swap;
	int	swap_2;

	j = 0;
	while (++j < ac)
		;
	i = j;
	j = 0;
	swap = a[j];
	a[j] = a[i - 1];
	while (j++ < ac - 1)
	{
		swap_2 = swap;
		swap = a[j];
		a[j] = swap_2;
	}
	if (bool == 1)
		write(1, "rrb\n", 4);
	return (a);
}

int	*ft_rra(int ac, int *a, int bool)
{
	int	j;
	int	i;
	int	swap;
	int	swap_2;

	j = 0;
	while (++j < ac)
		;
	i = j;
	j = 0;
	swap = a[j];
	a[j] = a[i - 1];
	while (j++ < ac - 1)
	{
		swap_2 = swap;
		swap = a[j];
		a[j] = swap_2;
	}
	if (bool == 1)
		write(1, "rra\n", 4);
	return (a);
}

t_tab	ft_rrr(t_tab tab)
{
	tab.a = ft_rra(tab.ac_a, tab.a, 0);
	tab.b = ft_rrb(tab.ac_b, tab.b, 0);
	write(1, "rrr\n", 4);
	return (tab);
}
