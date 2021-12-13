/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:18:23 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/13 17:37:08 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error(int ac, char **av)
{
	if (ac == 1)
		ft_putstr_fd("Push_swap(), take at least 1 argument (0 given)\n", 1);
	else if (!check_same_nb(av))
		ft_putstr_fd("Error. (Seems you write two or more same digits...)\n", 1);
	else
		ft_putstr_fd("test", 1);
	return (EXIT_FAILURE);
}
