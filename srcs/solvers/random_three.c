/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:53:42 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/15 12:39:43 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ft_case_3(t_stack *st_a)
{
	if (st_a->tab[st_a->top - 1] < st_a->tab[st_a->top] && \
		st_a->tab[st_a->top] < st_a->tab[st_a->top - 2])
		swap(st_a, 'a');
	else if (st_a->tab[st_a->top] > st_a->tab[st_a->top - 1] && \
			st_a->tab[st_a->top] > st_a->tab[st_a->top - 2] && \
			st_a->tab[st_a->top - 1] > st_a->tab[st_a->top - 2])
	{
		swap(st_a, 'a');
		revrotate(st_a, 'a');
	}
	else if (st_a->tab[st_a->top - 1] < st_a->tab[st_a->top] && \
		st_a->tab[st_a->top] > st_a->tab[st_a->top - 2])
		rotate(st_a, 'a');
	else if (st_a->tab[st_a->top - 1] > st_a->tab[st_a->top] && \
			st_a->tab[st_a->top - 1] > st_a->tab[st_a->top - 2] && \
			st_a->tab[st_a->top] > st_a->tab[st_a->top - 2])
		revrotate(st_a, 'a');
	else
	{	
		swap(st_a, 'a');
		rotate(st_a, 'a');
	}
}
