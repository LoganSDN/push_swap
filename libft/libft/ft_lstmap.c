/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsidan <lsidan@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:59:23 by lsidan            #+#    #+#             */
/*   Updated: 2021/11/09 10:22:24 by lsidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_c;
	
	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		new_c = ft_lstnew(f(lst->content));
		if (!new_c)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, new_c);
		lst = lst->next;
	}
	return(new);
	
}
