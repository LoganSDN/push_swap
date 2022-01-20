/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:41:25 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 23:27:04 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

t_stack	fill_tab(int ac, char **av)
{
	t_stack	cpy;
	t_stack	st_input;

	st_input = ft_char_to_int(ac, av);
	if (ft_is_sorted(st_input.tab, st_input.size, 'a'))
	{
		free(st_input.tab);
		exit (0);
	}
	cpy = ft_st_cpy(ac, av, st_input);
	ft_sort(cpy.tab, cpy.size);
	ft_new_index(&st_input, &cpy);
	free(cpy.tab);
	ft_rev_int_tab(st_input.tab, st_input.size);
	return (st_input);
}

t_stack	ft_char_to_int(int ac, char **av)
{
	char	**tmp;
	char	*s;
	t_stack	tab;
	int		i;

	i = -1;
	tmp = NULL;
	s = ft_join_ps(ac, av);
	if (!s || !ft_isnan(s))
		ft_exit();
	tmp = ft_split(s, ' ');
	free(s);
	if (ft_check(tmp) || !tmp)
		ft_free(tmp);
	tab.size = ft_count_tab(tmp);
	tab.top = tab.size - 1;
	tab.tab = malloc(sizeof(int) * tab.size);
	if (!tab.tab)
		ft_free(tmp);
	atoi_conv(tmp, &tab);
	return (tab);
}

t_stack	ft_st_cpy(int ac, char **av, t_stack st_input)
{
	char	**tmp;
	char	*s;
	t_stack	cpy;
	int		i;

	i = -1;
	tmp = NULL;
	s = ft_join_ps(ac, av);
	if (!s)
		ft_free2(tmp, st_input.tab);
	tmp = ft_split(s, ' ');
	free(s);
	if (!tmp)
		ft_free2(tmp, st_input.tab);
	cpy.size = ft_count_tab(tmp);
	cpy.top = cpy.size - 1;
	cpy.tab = malloc(sizeof(int) * cpy.size);
	if (!cpy.tab)
		ft_free2(tmp, st_input.tab);
	atoi_conv(tmp, &cpy);
	return (cpy);
}
