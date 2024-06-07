/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:36:15 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/07 06:56:39 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*from;

	str = (char *) dest;
	from = (char *) src;
	if (!src && !dest)
		return (str);
	if (n > 0)
	{
		while (--n > 0)
			str[n] = from[n];
		str[0] = from[0];
	}
	return (str);
}
