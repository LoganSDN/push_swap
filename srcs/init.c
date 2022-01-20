/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 08:58:12 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 20:00:42 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	init_st_b(t_stack *st_a, t_stack *st_b)
{
	st_b->tab = malloc(sizeof(int) * st_a->size);
	if (!st_b->tab)
	{
		free(st_a->tab);
		ft_exit();
	}
	st_b->tab = init_tab(st_b->tab, st_a->size);
	st_b->top = -1;
}

int	*init_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		tab[i] = 0;
	return (tab);
}

void	ft_new_index(t_stack *st_input, t_stack *cpy)
{
	int	i;
	int	j;

	i = -1;
	while (++i < st_input->size)
	{
		j = -1;
		while (++j < cpy->size)
		{
			if (st_input->tab[i] == cpy->tab[j])
			{
				st_input->tab[i] = j;
				break ;
			}
		}
	}
}
