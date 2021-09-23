/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:27:21 by adidion           #+#    #+#             */
/*   Updated: 2021/05/12 11:27:26 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_tab
{
	int		*a;
	int		*b;
	int		ac_a;
	int		ac_b;
}				t_tab;

int			ft_atoi(const char *str, t_tab tab);
t_tab		ft_algo_bus(t_tab tab);
t_tab		ft_big(t_tab tab, int div);
int			ft_find_rotate(t_tab tab, int mid);
int			ft_min_2_b(t_tab tab);
int			ft_min_b(t_tab tab);
int			ft_place_b(t_tab tab);
int			ft_find_mid(t_tab tab, int div);
int			*ft_sort_int_tab(t_tab tab, int size);
t_tab		ft_little(t_tab tab);
int			ft_can_use(t_tab tab, int place, int min_2, int min_3);
int			ft_is_sort(t_tab tab);
int			ft_choose(int place, int place_2, t_tab tab);
int			ft_abs(int num);
int			ft_min_2(t_tab tab);
int			ft_min(t_tab tab);
int			ft_place(t_tab tab);
t_tab		ft_three(t_tab tab);
t_tab		ft_two(t_tab tab);
void		ft_error(t_tab tab);
t_tab		ft_sort_bus(t_tab tab, char *type);
t_tab		ft_pa(t_tab tab);
t_tab		ft_pb(t_tab tab);
t_tab		ft_rrr(t_tab tab);
int			*ft_rra(int ac, int *a, int bool);
int			*ft_rrb(int ac, int *a, int bool);
t_tab		ft_rr(t_tab tab);
int			*ft_ra(int ac, int *a, int bool);
int			*ft_rb(int ac, int *a, int bool);
int			*ft_sa(int ac, int *tab);
int			*ft_sb(int ac, int *tab);
t_tab		ft_ss(t_tab tab);

#endif
