/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:12:16 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/16 19:21:59 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>

//Struct
typedef struct s_stack
{
	int	*stack;
	int	size;
	int	top;
}	t_stack;

//Proto
//Init
int		init_stack(t_stack *st, int ac);

//Process
void	fill_tab(int ac, char **av, int *tab);
int		case_2(t_stack *st);
void	ft_print_tab(int *tab, int ac);
int		error(int ac, char **av);

//Check
int		check(int ac, char **av);
int		check_same_nb(char **av);
int		check_isdigit(char **av);
int		is_full(t_stack	*st);
int		is_empty(t_stack *st);

//Push
void	pa(t_stack *st_a, t_stack *st_b);
void	pb(t_stack *st_a, t_stack *st_b);

//Swap
void	sa(t_stack	*st_a);
void	sb(t_stack	*st_b);
void	ss(t_stack	*st_a, t_stack *st_b);

#endif