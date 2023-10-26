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
#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*res;

    len1 = 0;
    len2 = 0;
	if (s1 != NULL)
		len1 = ft_strlen((char *) s1);
	if (s2 != NULL)
		len2 = ft_strlen((char *) s2);
	res = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	if (s1 != NULL)
		ft_strlcat(res, s1, len1 + 1);
	if (s2 != NULL)
		ft_strlcat(res, s2, len2 + len1 + 1);
	return (res);
}
