/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:34:39 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 22:23:08 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	ft_isnan(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
	{
		if (!ft_isdigit(s[i]) && s[i] != ' ' && s[i] != '-')
			return (0);
	}
	return (1);
}

int	ft_is_sorted(int *tab, int size, char c)
{
	int	i;

	i = 0;
	if (c)
	{	
		while (i < size - 1)
		{
			if (tab[i] < tab[i + 1])
				i++;
			else
				return (0);
		}
	}
	else
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				i++;
			else
				return (0);
		}	
	}
	return (1);
}

char	*ft_join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*txt;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	txt = malloc(i + j + 1);
	if (txt)
	{
		i = -1;
		j = -1;
		while (s1 && s1[++i])
			txt[i] = s1[i];
		if (i == -1)
			i = 0;
		while (s2 && s2[++j])
			txt[i + j] = s2[j];
		txt[i + j] = s2[j];
	}
	free(s1);
	return (txt);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
	}
}

void	ft_sort(int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	while (i < size)
	{
		if (tab[i] < tab[i - 1] && i != 0)
		{
			min = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = min;
			i = 0;
		}
		else
			i++;
	}
}
