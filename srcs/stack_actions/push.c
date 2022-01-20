/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:30:28 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/14 13:30:28 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	push_a(t_stack *st_a, t_stack *st_b)
{
	st_a->top++;
	st_a->tab[st_a->top] = st_b->tab[st_b->top];
	st_b->top--;
	ft_putstr_fd("pa\n", 1);
}

void	push_b(t_stack *st_a, t_stack *st_b)
{
	st_b->top++;
	st_b->tab[st_b->top] = st_a->tab[st_a->top];
	st_a->top--;
	ft_putstr_fd("pb\n", 1);
}
