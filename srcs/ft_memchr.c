/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:43:46 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/07 06:56:09 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	void			*res;
	size_t			i;

	str = (unsigned char *) s;
	character = (unsigned char) c;
	i = 0;
	res = 0;
	while (i < n)
	{
		if (str[i] == character)
		{
			res = (void *)(s + i);
			return (res);
		}
		i++;
	}
	return (res);
}
