/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:53:28 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/16 19:31:08 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stack *st_a, t_stack *st_b)
{
	if (is_full(st_a))
		return ;
	st_a->stack[st_a->top] = st_b->stack[0];
	dprintf(1, "\n%d pushed to stack A\n\n", st_b->stack[st_b->top]);
	st_a->top++;
	st_b->top++;
}

void	pb(t_stack *st_a, t_stack *st_b)
{
	int	i;

	i = st_b->top;
	if (is_full(st_b))
		return ;
	while (i <= st_b->size)
	{
		st_b->stack[i + 1] = st_b->stack[i];
		i++;
	}
	st_b->stack[st_b->top] = st_a->stack[st_a->top];
    dprintf(1, "\n%d pushed to stack B\n\n", st_a->stack[st_a->top]);
	st_a->top++;
	st_b->top++;
}
