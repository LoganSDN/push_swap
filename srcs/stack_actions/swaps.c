/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:30:45 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/14 13:30:45 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	swap(t_stack *st, char stack)
{
	int		tmp;

	if (st->top == 0)
		return ;
	tmp = st->tab[st->top];
	st->tab[st->top] = st->tab[st->top - 1];
	st->tab[st->top - 1] = tmp;
	if (stack == 'a' || stack == 'b')
		ft_printf("s%c\n", stack);
}

void	doubleswap(t_stack	*st_a, t_stack *st_b)
{
	if (st_a->top > 0 && st_b->top > 0)
	{
		swap(st_a, 0);
		swap(st_b, 0);
		ft_printf("ss\n");
	}
}
