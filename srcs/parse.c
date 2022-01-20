/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:37:16 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 23:26:50 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

char	*ft_join_ps(int ac, char **av)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	while (++i < ac)
	{
		if (!str)
			str = ft_strdup(av[i]);
		else
			str = ft_join(str, av[i]);
		str = ft_join(str, " ");
		if (!str)
			return (NULL);
	}
	return (str);
}

int	ft_check(char **tmp)
{
	int	i;
	int	j;

	i = 0;
	while (tmp[i])
	{
		j = i + 1;
		while (tmp[j])
		{
			if (!ft_strcmp(tmp[i], tmp[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_count_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	atoi_conv(char **tmp, t_stack *tab)
{
	int		i;

	i = -1;
	while (tmp[++i])
	{
		tab->tab[i] = ft_atoi_pimp(tmp[i], tmp, i);
		free(tmp[i]);
	}
	free(tmp);
}
