/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:03:02 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/15 12:23:41 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	count_bit(int max)
{
	int	c_bit;

	c_bit = 0;
	while ((max >> c_bit))
		c_bit++;
	return (c_bit);
}

void	radix_sort(t_stack *st_a, t_stack *st_b)
{
	int	size;
	int	top;
	int	num;
	int	i;
	int	j;

	i = -1;
	size = st_a->top + 1;
	top = st_a->top;
	while (++i < count_bit(top))
	{
		j = -1;
		while (++j < size)
		{
			num = st_a->tab[st_a->top];
			if ((num >> i) & 1)
				rotate(st_a, 'a');
			else
				push_b(st_a, st_b);
		}
		while (st_b->top != -1)
			push_a(st_a, st_b);
	}
}
