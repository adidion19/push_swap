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

t_tab	ft_ss(t_tab tab)
{
	int swap;

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

int		*ft_sb(int ac, int *tab)
{
	int swap;

	if (ac < 2)
		return (tab);
	swap = tab[0];
	tab[0] = tab[1];
	tab[1] = swap;
	write(1, "sb\n", 3);
	return (tab);
}

int		*ft_sa(int ac, int *tab)
{
	int swap;

	if (ac < 2)
		return (tab);
	swap = tab[0];
	tab[0] = tab[1];
	tab[1] = swap;
	write(1, "sa\n", 3);
	return (tab);
}

int		*ft_rb(int ac, int *a, int bool)
{
	int j;
	int i;
	int swap;
	int swap_2;

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

int		*ft_ra(int ac, int *a, int bool)
{
	int j;
	int i;
	int swap;
	int swap_2;

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

int		*ft_rrb(int ac, int *a, int bool)
{
	int j;
	int i;
	int swap;
	int swap_2;

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

int		*ft_rra(int ac, int *a, int bool)
{
	int j;
	int i;
	int swap;
	int swap_2;

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

t_tab		ft_rrr(t_tab tab)
{
	tab.a = ft_rra(tab.ac_a,tab.a, 0);
	tab.b = ft_rrb(tab.ac_b,tab.b, 0);
	write(1, "rrr\n", 4);
	return (tab);
}

t_tab		ft_pb(t_tab tab)
{
	int *temp_a;
	int *temp_b;
	int i;
	int j;

	if (tab.ac_a == 0)
		return (tab);
	temp_b = malloc(sizeof(int) * (tab.ac_b + 1));
	if (!temp_b)
		exit(1);
	temp_a = malloc(sizeof(int) * (tab.ac_a - 1));
	if (!temp_a)
		exit(1);
	i = 0;
	j= -1;
	while (++i < tab.ac_a)
		temp_a[++j] = tab.a[i];
	i = 0;
	temp_b[i] = tab.a[i];
	j = -1;
	while(++j < tab.ac_b)
	{
		i++;
		temp_b[i] = tab.b[j];
	}
	write(1, "pb\n", 3);
	if (tab.b)
		free(tab.b);
	if (tab.a)
		free(tab.a);
	tab.b = temp_b;
	tab.a = temp_a;
	tab.ac_b++;
	tab.ac_a--;
	return (tab);
}

t_tab		ft_pa(t_tab tab)
{
	int *temp_a;
	int *temp_b;
	int i;
	int j;

	if (tab.ac_b == 0)
		return (tab);
	temp_a = malloc(sizeof(int) * (tab.ac_a + 1));
	if (!temp_a)
		exit(1);
	temp_b = malloc(sizeof(int) * (tab.ac_b - 1));
	if (!temp_b)
		exit(1);
	i = 0;
	j = -1;
	while (++i < tab.ac_b)
		temp_b[++j] = tab.b[i];
	i = 0;
	temp_a[i] = tab.b[i];
	j = -1;
	while(++j < tab.ac_a)
	{
		i++;
		temp_a[i] = tab.a[j];
	}
	write(1, "pa\n", 3);
	if (tab.a)
		free(tab.a);
	if (tab.b)
		free(tab.b);
	tab.a = temp_a;
	tab.b = temp_b;
	tab.ac_a++;
	tab.ac_b--;
	return (tab);
}

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

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

/*

**sa : swap a - intervertit les 2 premiers éléments au sommet de la pile a. Ne fait**
**rien s’il n’y en a qu’un ou aucun.**
**sb : swap b - intervertit les 2 premiers éléments au sommet de la pile b. Ne fait**
**rien s’il n’y en a qu’un ou aucun.**
**ss : sa et sb en même temps.**
**pa : push a - prend le premier élément au sommet de b et le met sur a. Ne fait**
**rien si b est vide.**
**pb : push b - prend le premier élément au sommet de a et le met sur b. Ne fait**
**rien si a est vide.**
**ra : rotate a - décale d’une position vers le haut tous les élements de la pile a.**
**Le premier élément devient le dernier.**
**rb : rotate b - décale d’une position vers le haut tous les élements de la pile b.**
**Le premier élément devient le dernier.**
**rr : ra et rb en même temps.**
**rra : reverse rotate a - décale d’une position vers le bas tous les élements de**
**la pile a. Le dernier élément devient le premier.**
**rrb : reverse rotate b - décale d’une position vers le bas tous les élements de**
**la pile b. Le dernier élément devient le premier.**
**rrr : rra et rrb en même temps.**

*/

void	ft_error(t_tab tab)
{
	free(tab.a);
	free(tab.b);
	printf("Error\n");
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

int		ft_place(t_tab tab)
{
	int min;
	int i;
	int j;

	min = tab.a[0];
	i = 0;
	j = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
		{
			j = i;
			min = tab.a[i];
		}
	}
	return (j);
}

int		ft_place_2(t_tab tab)
{
	int min_2;
	int min;
	int i;
	int j;

	min_2 = tab.a[0];
	min = tab.a[0];
	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
		{
			min_2 = min;
			min = tab.a[i];
			j = i;
		}
		if (tab.a[i] < min_2 && tab.a[i] > min)
		{
			j = i;
			min_2 = tab.a[i];
		}
	}
	return (j);
}

int		ft_min(t_tab tab)
{
	int min;
	int i;

	min = tab.a[0];
	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
			min = tab.a[i];
	}
	return (min);
}

int		ft_min_2(t_tab tab)
{
	int min_2;
	int min;
	int i;

	min_2 = INT_MAX;
	min = tab.a[0];
	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
		{
			min_2 = min;
			min = tab.a[i];
		}
		if (tab.a[i] < min_2 && tab.a[i] > min)
			min_2 = tab.a[i];
	}
	return (min_2);
}

int		ft_min_3(t_tab tab)
{
	int min_2;
	int min_3;
	int min;
	int i;

	min_2 = tab.a[0];
	min = tab.a[0];
	min_3 = tab.a[0];
	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < min)
		{
			min_3 = min_2;
			min_2 = min;
			min = tab.a[i];
		}
		if (tab.a[i] < min_2 && tab.a[i] > min)
		{
			min_3 = min_2;
			min_2 = tab.a[i];
		}
		if (tab.a[i] < min_3 && tab.a[i] > min && tab.a[i] > min_2)
			min_3 = min_2;
	}
	return (min_3);
}

int		ft_abs(int num)
{
	if (num < 0)
		num = -num;
	return (num);
}

int		ft_choose(int place, int place_2, t_tab tab)
{
	int old;
	int old_2;

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

int		ft_is_sort(t_tab tab)
{
	int i;

	i = 0;
	while (--tab.ac_a)
	{
		i++;
		if (tab.a[i] < tab.a[i - 1])
			return (0);
	}
	//i++;
	//if (tab.a[i] < tab.a[i - 1])
	//		return (2);
	return (1);
}

int		ft_can_use(t_tab tab, int place, int min_2, int min_3)
{
	int i;
	int place_2;
	int place_3;

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

t_tab	ft_little(t_tab tab)
{
	int min;
	int place;
	int min_2;
	int bool;
	//int min_3;

	bool = 0;
	while (tab.ac_a > 3 && ft_is_sort(tab) == 0)
	{
		min = ft_min(tab);
		place = ft_place(tab);
		min_2 = ft_min_2(tab);
		//min_3 = ft_min_3(tab);
		if (bool == 1)// || !ft_can_use(tab, place, min_2, min_3))
		{
			if (bool == 1)
				min_2 = INT_MAX;
			//min_3 = INT_MAX;
		}
		//min_3 = INT_MAX;
		//printf("%d, %d\n", min, min_2);
		//min_2 = 54545;
		if (tab.a[1] == min || (tab.a[1] == min_2 && tab.a[0] != min))
			tab = ft_sort_bus(tab, "sa");
		//if (min_2 == tab.a[tab.ac_a - 1] && min != tab.a[0])
		//	ft_sort_bus(tab, "rra");
		if (place < tab.ac_a / 2)
		{
			while (tab.a[0] != min && tab.a[0] != min_2)// && tab.a[0] != min_3)
			{
					tab = ft_sort_bus(tab, "ra");
					//if (tab.a[1] == min || (tab.a[1] == min_2 && tab.a[0] != min))
					//	tab = ft_sort_bus(tab, "sa");
			}
		}
		else
		{
			//if (tab.a[0] > tab.a[1])
			//tab = ft_sort_bus(tab, "sa");
			while (tab.a[0] != min && tab.a[0] != min_2)// && tab.a[0] != min_3)
			{
					tab = ft_sort_bus(tab, "rra");
			}
		}
		if (min_2 == tab.a[0])
			bool = 1;
		if (min == tab.a[0])
			bool = 0;
		tab = ft_sort_bus(tab, "pb");
		if (tab.b[0] < tab.b[1])
			tab = ft_sort_bus(tab, "sb");
	}
		tab = ft_three(tab);
	while (tab.ac_b)
		tab = ft_sort_bus(tab, "pa");
	return (tab);
}

int		ft_find_mid(t_tab tab)
{
	int i;
	long long a;

	i = -1;
	a = 0;
	while (++i < tab.ac_a)
	{
		a += tab.a[i];
	}
	a = a / tab.ac_a;
	return (a);
}

t_tab	ft_big(t_tab tab, int div)
{
	int mid;

	mid = ft_find_mid(tab);
}

t_tab	ft_algo_bus(t_tab tab)
{
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
		tab = ft_big(tab, 8);
	return (tab);
}

int		main(int ac, char **av)
{
	int 	i;
	t_tab	tab;
	
	ac--;
	i = -1;
	if (ac < 2)
		return (0);
	tab.ac_a = ac;
	tab.ac_b = 0;
	tab.a = malloc(sizeof(int) * tab.ac_a);
	if (!tab.a)
		exit (1);
	while (++i < ac)
		tab.a[i] = ft_atoi(av[i + 1]);
	tab = ft_algo_bus(tab);
	i = -1;
	printf("a\n");
	while (++i < tab.ac_a)
	{
		printf("|%d|", i);
		printf("%d\n", tab.a[i]);
	}
	//printf("b\n");
	i = -1;
	while (++i < tab.ac_b)
		printf("%d\n", tab.b[i]);
	free(tab.b);
	free(tab.a);
	//system("leaks a.out");
	exit(1);
}