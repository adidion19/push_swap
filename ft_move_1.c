/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:24:26 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:24:28 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	ft_ss(t_tab tab)
{
	int	swap;

	if (tab.ac_a < 2 || tab.ac_b < 2)
		return (tab);
	if (!tab.a || !tab.b)
		exit (1);
	swap = tab.a[0];
	tab.a[0] = tab.a[1];
	tab.a[1] = swap;
	swap = tab.b[0];
	tab.b[0] = tab.b[1];
	tab.b[1] = swap;
	write(1, "ss\n", 3);
	return (tab);
}

int	*ft_sb(int ac, int *tab)
{
	int	swap;

	if (ac < 2)
		return (tab);
	swap = tab[0];
	tab[0] = tab[1];
	tab[1] = swap;
	write(1, "sb\n", 3);
	return (tab);
}

int	*ft_sa(int ac, int *tab)
{
	int	swap;

	if (ac < 2)
		return (tab);
	swap = tab[0];
	tab[0] = tab[1];
	tab[1] = swap;
	write(1, "sa\n", 3);
	return (tab);
}

int	*ft_rb(int ac, int *a, int bool)
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
		write(1, "rb\n", 3);
	return (a);
}
