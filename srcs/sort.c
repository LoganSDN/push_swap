/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:10:45 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/16 19:05:31 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_full(t_stack	*st)
{
	return (st->top == st->size);
}

int	is_empty(t_stack *st)
{
	return (st->top == 0);
}

int	case_2(t_stack *st)
{
	int	tmp;

	tmp = 0;
	if (st->stack[1] < st->stack[0])
	{
		tmp = st->stack[1];
		st->stack[1] = st->stack[0];
		st->stack[0] = tmp;
	}
	return (0);
}
