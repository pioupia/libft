/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:15:41 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/17 16:03:35 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	res = 0;
	while ((i + j) < len && big[i + j] && little[j])
	{
		if (big[i + j] == little[j])
			j++;
		else
		{
			j = 0;
			i++;
		}
	}
	if (!little[j])
		res = (char *)(big + i);
	return (res);
}
