/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:18:23 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/16 15:45:34 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error(int ac, char **av)
{
	if (ac < 3)
		printf("Error.\nPush_swap(), take at least 2 argument (%d given)\n", ac - 1);
	else if (!check_same_nb(av))
		ft_putstr_fd("Error.\n\
(Seems you write two or more same digits...)\n", 1);
	else if (!check_isdigit(av))
		ft_putstr_fd("Error.\n\
(Seems you write an other thing that a number)\n", 1);
	return (EXIT_FAILURE);
}
