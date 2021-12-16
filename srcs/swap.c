/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:22:19 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/16 15:53:18 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack	*st_a)
{
	int	tmp;

	if (st_a->size < 1)
		return ;
	tmp = st_a->stack[0];
	st_a->stack[0] = st_a->stack[1];
	st_a->stack[1] = tmp;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack	*st_b)
{
	int	tmp;

	if (st_b->size < 1)
		return ;
	tmp = st_b->stack[0];
	st_b->stack[0] = st_b->stack[1];
	st_b->stack[1] = tmp;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack	*st_a, t_stack *st_b)
{
	sa(st_a);
	sb(st_b);
	ft_putstr_fd("ss\n", 1);
}