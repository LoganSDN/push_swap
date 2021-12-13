/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:14:18 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/13 17:37:29 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	stack_a = (t_stack *) malloc(sizeof(t_stack));
	stack_b = (t_stack *) malloc(sizeof(t_stack));
	if (ac < 2)
		return (error(ac, av));
	if (!check_same_nb(av) || !check_isdigit(av))
		return (error(ac, av));
	init_stack(stack_a, ac);
	fill_tab(ac, av, stack_a->stack);
	if (ac == 3)
		case_2(stack_a);
	ft_print_tab(stack_a->stack, ac);
	free(stack_a);
	free(stack_b);
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
