/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:54:32 by adidion           #+#    #+#             */
/*   Updated: 2021/05/12 14:54:37 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//static int	ft_isspace(char c)
//{
//	if (c == '\n' || c == ' ' || c == '\t' ||
//	c == '\v' || c == '\f' || c == '\r')
//		return (1);
//	return (0);
//}

void	ft_error_2(t_tab tab)
{
	printf("Error\n");
	free(tab.a);
	exit(1);
}

static long	ft_strtol(const char *str, t_tab tab)
{
	unsigned long long	i;
	long long			ans;
	int					neg;

	i = 0;
	ans = 0;
	neg = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		((str[i] == '-') && (neg = neg * -1));
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		ft_error_2(tab);
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10 + str[i++] - '0';
	}
	if (str[i] || (ans > 2147483647 && neg == 1) || (ans > 2147483648 && neg == -1) || i > 11)
		ft_error_2(tab);
	ans = ans * neg;
	return ((long)ans);
}

int			ft_atoi(const char *str, t_tab tab)
{
	long long i;

	i = ft_strtol(str, tab);
	return ((int)i);
}
