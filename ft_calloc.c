/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:37 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/21 10:50:50 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s;
	char	*el;

	s = nmemb * size;
	if (s < nmemb || s < size || (s == 0 && nmemb != 0 && size != 0))
		return (NULL);
	el = malloc(s);
	if (el == NULL)
		return ((void *) el);
	if (s > 0)
	{
		while (--s)
			el[s] = 0;
	}
	el[0] = 0;
	return ((void *) el);
}
