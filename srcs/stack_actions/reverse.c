/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:30:20 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/14 13:30:20 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	revrotate(t_stack *st, char stack)
{
	int	tmp;
	int	p_val;
	int	i;

	if (st->top == 0)
		return ;
	i = st->top;
	p_val = st->tab[0];
	while (i > 0)
	{
		tmp = st->tab[i];
		st->tab[i] = p_val;
		p_val = tmp;
		i--;
	}
	st->tab[0] = p_val;
	if (stack == 'a' || stack == 'b')
		ft_printf("rr%c\n", stack);
}

void	double_revrotate(t_stack *st_a, t_stack *st_b)
{
	if (st_a->top > 0 && st_b->top > 0)
	{
		revrotate(st_a, 0);
		revrotate(st_b, 0);
		ft_printf("rrr\n");
	}
}
