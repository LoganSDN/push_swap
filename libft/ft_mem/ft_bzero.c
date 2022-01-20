/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:25:15 by lsidan            #+#    #+#             */
/*   Updated: 2021/11/04 09:57:34 by lsidan           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void	*s, int n)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *) s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}