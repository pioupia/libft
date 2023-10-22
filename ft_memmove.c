/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:48:29 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/18 10:43:30 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove_left(void *dest, const void *src, size_t n)
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

void	*ft_memmove_right(void *dest, const void *src, size_t n)
{
	char	*from;
	char	*to;

	from = (char *) src;
	to = (char *) dest;
	if (n > 0)
	{
		while (--n > 0)
			to[n] = from[n];
		to[0] = from[0];
	}
	return (to);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src < dest)
		return (ft_memmove_right(dest, src, n));
	else if (src > dest)
		return (ft_memmove_left(dest, src, n));
	else
		return (dest);
}
