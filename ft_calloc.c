/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:37 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/23 10:21:09 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		s;
	long double	d;
	char		*el;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	d = s / nmemb;
	if ((size_t) d != size)
		return (NULL);
	el = malloc(s);
	if (el == NULL)
		return (NULL);
	ft_bzero(el, s);
	return ((void *) el);
}
