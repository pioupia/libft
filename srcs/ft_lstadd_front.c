/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:31:42 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/07 06:49:55 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_lstremove_link(t_list *first, t_list *new)
{
	while (first)
	{
		if (first->next == new)
		{
			first->next = new->next;
			break ;
		}
		first = first->next;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL && new != *lst && *lst != NULL)
	{
		ft_lstremove_link(*lst, new);
		new->next = *lst;
		*lst = new;
	}
}
