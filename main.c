/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:09:10 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 22:36:59 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incl/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (!(ac > 1))
		exit(1);
	stack_a = fill_tab(ac, av);
	init_st_b(&stack_a, &stack_b);
	if (stack_a.size == 2)
		swap(&stack_a, 'a');
	else if (stack_a.size == 3)
		ft_case_3(&stack_a);
	else if (stack_a.size == 5)
		ft_case_5(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	ft_freestacks(stack_a, stack_b);
	return (0);
}
