/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:17:47 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/19 09:46:08 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
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
			res = (char *) s + i;
		i++;
	}
	if (s[i] == character)
		res = (char *) s + i;
	return (res);
}
