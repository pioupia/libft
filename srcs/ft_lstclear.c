/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:20:45 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/20 16:49:36 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *content))
{
	t_list	*el;
	t_list	*temp;

	el = *lst;
	while (el)
	{
		temp = el->next;
		ft_lstdelone(el, del);
		el = temp;
	}
	*lst = NULL;
}
