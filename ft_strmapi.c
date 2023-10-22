/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:41:09 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/20 10:44:19 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	if (s == NULL)
		len = 0;
	else
		len = ft_strlen(s);
	i = 0;
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		if (f == NULL)
			res[i] = s[i];
		else
			res[i] = f(i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}
