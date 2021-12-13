/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:38:51 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/13 14:49:00 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	init_stack(t_stack *st, int ac)
{
	st->stack = (int *) malloc(sizeof(int) * (ac)); 
	if (!st->stack)
		return (EXIT_FAILURE);
	st->size = ac - 1;
	return (EXIT_SUCCESS);
}

void	fill_tab(int ac, char **av, int *tab)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		tab[i - 1] = ft_atoi(av[i]);
		i++;
	}
}