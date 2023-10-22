/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:51:21 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/19 10:05:19 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	character;
	char	*res;

	res = 0;
	i = 0;
	character = (char) c;
	while (s[i])
	{
		if (s[i] == character)
		{
			res = (char *) s + i;
			return (res);
		}
		i++;
	}
	if (s[i] == character)
		res = (char *) s + i;
	return (res);
}
