/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 08:58:28 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/20 08:48:51 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	final_length;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dst);
	final_length = ft_min(dest_len, size) + ft_strlen(src);
	i = dest_len;
	j = 0;
	if (dest_len >= size)
		return (final_length);
	if (size != 0)
		size--;
	while (i < size && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (final_length);
}
