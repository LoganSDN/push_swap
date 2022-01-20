/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:19:09 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 23:27:41 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int		*tab;
	int		size;
	int		top;
}			t_stack;

//SORT FUNCTIONS
void	ft_sort(int *tab, int size);
void	radix_sort(t_stack *st_a, t_stack *st_b);
void	ft_case_3(t_stack *st_a);
void	ft_case_5(t_stack *st_a, t_stack *st_b);

//PROCESS FUNCTIONS
void	ft_print_tab(int *tab, int size);
void	ft_rev_int_tab(int	*tab, int size);
void	ft_new_index(t_stack *st_input, t_stack *cpy);
void	init_st_b(t_stack *st_a, t_stack *st_b);
char	*ft_join_ps(int ac, char **av);
char	*ft_join(char *s1, char *s2);
int		*init_tab(int *tab, int size);
int		ft_isnan(char *s);
int		ft_is_sorted(int *tab, int size, char c);
int		ft_count_tab(char **tab);
int		ft_atoi_pimp(const char *str, char **tmp, int j);
t_stack	ft_char_to_int(int ac, char **av);
t_stack	ft_st_cpy(int ac, char **av, t_stack st_input);
t_stack	fill_tab(int ac, char **av);

//SECURITY FUNCTIONS
void	ft_exit(void);
void	ft_exit_atoi(char **tab, int i);
void	ft_freestacks(t_stack st_a, t_stack st_b);
void	atoi_conv(char **tmp, t_stack *tab);
void	ft_free(char	**tab);
void	ft_free2(char	**tab, int *stack);
int		ft_check(char **tmp);

//SWAP
void	swap(t_stack *st, char name);
void	doubleswap(t_stack *st_a, t_stack *st_b);

//ROTATE
void	rotate(t_stack *st, char stack);
void	double_rotate(t_stack *st_a, t_stack *st_b);
void	revrotate(t_stack *st, char stack);
void	double_revrotate(t_stack *st_a, t_stack *st_b);

//PUSH
void	push_a(t_stack *st_a, t_stack *st_b);
void	push_b(t_stack *st_a, t_stack *st_b);

#endif