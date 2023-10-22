/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:00:16 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/20 16:14:28 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*el;

	if (lst != 0)
	{
		el = *lst;
		if (!el)
			*lst = new;
		else
		{
			while (el->next)
				el = el->next;
			el->next = new;
		}
	}
}
