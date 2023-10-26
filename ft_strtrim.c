/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:05:08 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/21 16:05:25 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	is_in_set(const char c, const char *set)
{
	int	i;

	i = 0;
	if (set == NULL)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	count_trim_char(char const *s1, char const *set, size_t len)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (s1 == NULL)
		return (count);
	while (s1[i] && is_in_set(s1[i++], set))
		count++;
	if (i == len)
		return (count);
	i = len;
	while (--i > 0 && is_in_set(s1[i], set))
		count++;
	return (count);
}

static void	set_in_str(char *res, const char *s1, const char *set, size_t len)
{
	size_t	i;
	int		shift;

	i = 0;
	shift = 0;
	while (s1[i] && is_in_set(s1[i++], set))
		shift++;
	--i;
	len += shift;
	while (i < len)
	{
		res[i - shift] = s1[i];
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		count;
	size_t	len;
	char	*res;

    len = 0;
	if (s1 != NULL)
        len = ft_strlen(s1);
	count = count_trim_char(s1, set, len);
	res = ft_calloc((len - count + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	if (s1 == NULL)
		return (res);
	set_in_str(res, s1, set, len - count);
	return (res);
}
