/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:12:16 by lsidan            #+#    #+#             */
/*   Updated: 2021/12/13 18:50:07 by lsidan           ###   ########.fr       */
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
}	t_stack;

//Proto
int		error(int ac, char **av);
void	ft_print_tab(int *tab, int ac);
void	fill_tab(int ac, char **av, int *tab);
int		init_stack(t_stack *st, int ac);
int		case_2(t_stack *st);
int		check_same_nb(char **av);
int		check_isdigit(char **av);
int		check(int ac, char **av);

#endif