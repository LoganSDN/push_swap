/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:48:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/15 12:39:30 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ft_case_5(t_stack *st_a, t_stack *st_b)
{
	if (st_a->tab[0] == 0)
		revrotate(st_a, 'a');
	while (st_a->tab[st_a->top] != 0)
		rotate(st_a, 'a');
	if (st_a->tab[st_a->top] == 0)
		push_b(st_a, st_b);
	if (st_a->tab[0] == 1)
		revrotate(st_a, 'a');
	while (st_a->tab[st_a->top] != 1)
		rotate(st_a, 'a');
	if (st_a->tab[st_a->top] == 1)
		push_b(st_a, st_b);
	if (!ft_is_sorted(st_a->tab, st_a->top + 1, 0))
		ft_case_3(st_a);
	while (st_b->top != -1)
		push_a(st_a, st_b);
}
