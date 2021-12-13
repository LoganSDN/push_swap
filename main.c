/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:14:18 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/13 13:50:48 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	int		*stack_a;

	if (ac < 2)
		return (error(ac));
	stack_a = init_tab(ac, av);
	ft_print_tab(stack_a, ac);
	free(stack_a);
	return (EXIT_SUCCESS);
}

void	ft_print_tab(int *tab, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putnbr_fd(tab[i - 1], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}
