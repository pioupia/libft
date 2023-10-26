/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:56:18 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/21 17:08:12 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"
#include <stdlib.h>

static t_list	*ft_lstset_node(t_list *lst, t_list **el,
		void *(*f)(void *), void (*del)(void *))
{
	t_list	*iter_temp;
	t_list	*created_temp;
	void	*content;

	iter_temp = NULL;
	content = lst->content;
	if (lst->next)
		iter_temp = lst->next;
	if (f)
		content = f(lst->content);
	created_temp = ft_lstnew(content);
	if (!created_temp)
	{
		if (f)
			del(content);
		ft_lstclear(el, del);
		return (NULL);
	}
	ft_lstadd_back(el, created_temp);
	return (iter_temp);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*el;

	el = NULL;
	while (lst && lst->next)
	{
		lst = ft_lstset_node(lst, &el, f, del);
		if (!lst)
			return (NULL);
	}
	if (lst)
		ft_lstset_node(lst, &el, f, del);
	return (el);
}
