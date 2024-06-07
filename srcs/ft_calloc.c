/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:37 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/07 06:44:10 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		size;
	long double	divided;
	char		*el;

	if (nmemb == 0 || size == 0)
		return (NULL);
	size = nmemb * size;
	divided = size / nmemb;
	if ((size_t) divided != size)
		return (NULL);
	el = malloc(size);
	if (el == NULL)
		return (NULL);
	ft_bzero(el, size);
	return ((void *) el);
}
