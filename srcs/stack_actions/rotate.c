/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:30:40 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/15 12:22:45 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	rotate(t_stack *st, char stack)
{
	int	tmp;
	int	p_val;
	int	i;

	if (st->top == 0)
		return ;
	i = 0;
	p_val = st->tab[st->top];
	while (i < st->top)
	{
		tmp = st->tab[i];
		st->tab[i] = p_val;
		p_val = tmp;
		i++;
	}
	st->tab[st->top] = p_val;
	if (stack == 'a' || stack == 'b')
		ft_printf("r%c\n", stack);
}

void	double_rotate(t_stack *st_a, t_stack *st_b)
{
	if (st_a->top > 0 && st_b->top > 0)
	{
		rotate(st_a, 0);
		rotate(st_b, 0);
		ft_printf("rr\n");
	}
}
