/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_pimp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:10:56 by lsidan            #+#    #+#             */
/*   Updated: 2022/01/16 23:27:17 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	ft_atoi_pimp(const char *str, char **tmp, int j)
{
	int			i;
	long long	nb;
	int			sign;

	sign = 1;
	nb = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		i++;
		sign *= -1;
		if (!(str[i] >= '0' && str[i] <= '9'))
			ft_exit_atoi(tmp, j);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i++] - '0');
		if ((nb > 2147483647 && sign == 1) || (nb > 2147483648 && sign == -1))
			ft_exit_atoi(tmp, j);
	}
	if (str[i] != '\0')
		ft_exit_atoi(tmp, j);
	return (nb * sign);
}
