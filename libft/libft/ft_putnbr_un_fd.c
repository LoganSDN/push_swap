/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:54:51 by lsidan            #+#    #+#             */
/*   Updated: 2021/11/17 19:55:26 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_un_fd(unsigned int nb, int fd)
{
	unsigned long long	nb1;

	nb1 = nb;
	if (nb1 >= 10)
	{
		ft_putnbr_fd((nb1 / 10), fd);
		ft_putnbr_fd((nb1 % 10), fd);
	}
	else
		ft_putchar_fd(nb1 + 48, fd);
}
