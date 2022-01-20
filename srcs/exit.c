/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:54:50 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 22:10:13 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_exit_atoi(char **tab, int i)
{
	ft_putstr_fd("Error\n", 2);
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	exit(1);
}

void	ft_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
