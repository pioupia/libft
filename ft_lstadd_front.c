/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:42 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/21 07:52:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_lstremove_link(t_list *first, t_list *new)
{
	while (first)
	{
		if (first->next == new)
			first->next = new->next;
		first = first->next;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != 0 && new != 0 && new != *lst)
	{
		ft_lstremove_link(*lst, new);
		new->next = *lst;
		*lst = new;
	}
}
