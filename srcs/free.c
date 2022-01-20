/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:56:46 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 22:15:17 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_free(char	**tab)
{
	int	i;

	i = -1;
	while (tab && tab[++i])
		free(tab[i]);
	free(tab);
	ft_exit();
}

void	ft_free2(char	**tab, int *stack)
{
	int	i;

	i = -1;
	free(stack);
	while (tab && tab[++i])
		free(tab[i]);
	free(tab);
	ft_exit();
}

void	ft_freestacks(t_stack st_a, t_stack st_b)
{
	free (st_a.tab);
	free (st_b.tab);
}
