/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:48:29 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/07 06:56:42 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	*ft_memmove_left(void *dest, const void *src, size_t n)
{
	char	*from;
	char	*to;
	size_t	i;

	from = (char *) src;
	to = (char *) dest;
	i = 0;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		return (ft_memcpy(dest, src, n));
	else if (src > dest)
		return (ft_memmove_left(dest, src, n));
	else
		return (dest);
}
