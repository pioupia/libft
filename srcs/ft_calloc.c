/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:58:37 by pioupia           #+#    #+#             */
/*   Updated: 2024/07/24 11:31:16 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		new_size;
	long double	divided;
	char		*el;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new_size = nmemb * size;
	divided = new_size / nmemb;
	if ((size_t) divided != size)
		return (NULL);
	el = malloc(new_size);
	if (el == NULL)
		return (NULL);
	ft_bzero(el, new_size);
	return ((void *) el);
}
