/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 10:24:37 by adidion           #+#    #+#             */
/*   Updated: 2021/09/21 10:24:39 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_tab(t_tab tab)
{
	if (tab.a)
		free(tab.a);
	if (tab.b)
		free(tab.b);
}

t_tab	ft_pb(t_tab tab)
{
	int	*temp_a;
	int	*temp_b;
	int	i;
	int	j;

	temp_b = malloc(sizeof(int) * (tab.ac_b + 1));
	temp_a = malloc(sizeof(int) * (tab.ac_a - 1));
	if (!temp_a || !temp_b)
		ft_error(tab);
	i = 0;
	j = -1;
	while (++i < tab.ac_a)
		temp_a[++j] = tab.a[i];
	i = 0;
	temp_b[i] = tab.a[i];
	j = -1;
	while (++j < tab.ac_b)
		temp_b[++i] = tab.b[j];
	write(1, "pb\n", 3);
	ft_free_tab(tab);
	tab.b = temp_b;
	tab.a = temp_a;
	tab.ac_b++;
	tab.ac_a--;
	return (tab);
}

t_tab	ft_pa(t_tab tab)
{
	int	*temp_a;
	int	*temp_b;
	int	i;
	int	j;

	temp_a = malloc(sizeof(int) * (tab.ac_a + 1));
	temp_b = malloc(sizeof(int) * (tab.ac_b - 1));
	if (!temp_a || !temp_b)
		ft_error(tab);
	i = 0;
	j = -1;
	while (++i < tab.ac_b)
		temp_b[++j] = tab.b[i];
	i = 0;
	temp_a[i] = tab.b[i];
	j = -1;
	while (++j < tab.ac_a)
		temp_a[++i] = tab.a[j];
	write(1, "pa\n", 3);
	ft_free_tab(tab);
	tab.a = temp_a;
	tab.b = temp_b;
	tab.ac_a++;
	tab.ac_b--;
	return (tab);
}
