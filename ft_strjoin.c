/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:37:49 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/20 10:01:09 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	ft_fill(char *str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

	if (s1 != NULL)
		len1 = ft_strlen((char *) s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = ft_strlen((char *) s2);
	else
		len2 = 0;
	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_fill(res, len1 + len2 + 1);
	if (s1 != NULL)
		ft_strlcat(res, s1, len1 + 1);
	if (s2 != NULL)
		ft_strlcat(res, s2, len2 + len1 + 1);
	return (res);
}
