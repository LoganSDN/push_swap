/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:38:51 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/13 13:52:24 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*init_tab(int ac, char **av)
{
	int	i;
	int	*tab;

	i = 1;
	tab = (int *) malloc(sizeof(int) * (ac));
	while (i < ac)
	{
		tab[i - 1] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}
