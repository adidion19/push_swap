/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:26:59 by adidion           #+#    #+#             */
/*   Updated: 2021/05/12 11:27:02 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	t_tab	tab;

	ac--;
	i = -1;
	if (ac < 2)
		return (0);
	tab.ac_a = ac;
	tab.ac_b = 0;
	tab.a = malloc(sizeof(int) * tab.ac_a);
	if (!tab.a)
		exit(1);
	while (++i < ac)
		tab.a[i] = ft_atoi(av[i + 1], tab);
	tab = ft_algo_bus(tab);
	free(tab.b);
	free(tab.a);
	exit(1);
}
