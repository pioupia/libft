/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:16:35 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/21 15:25:15 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_find_occurence(const char *s, char c, int from)
{
	while (s[from] && s[from] != c)
		from++;
	return (from);
}

int	ft_count_occurence(const char *s, char c)
{
	int	i;
	int	temp_len;
	int	count;
	int	stop;

	i = 0;
	count = 0;
	stop = 0;
	if (s == NULL)
		return (count);
	while (!stop && s[i])
	{
		temp_len = ft_find_occurence(s, c, i);
		if (temp_len != i)
			count++;
		i = temp_len + 1;
		if (i != 0)
			stop = s[i - 1] == '\0';
	}
	return (count);
}

char	*ft_copy_buffer(const char *s, int len)
{
	int		i;
	char	*res;

	i = 0;
	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (res);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	ft_fill_tab(const char *s, char c, char **res, int count)
{
	int	i;
	int	len;
	int	temp_len;

	i = 0;
	len = 0;
	while (i < count)
	{
		temp_len = ft_find_occurence(s, c, len);
		if (temp_len != len)
		{
			res[i] = ft_copy_buffer(s + len, temp_len - len);
			if (res[i] == NULL)
				return (-i);
			i++;
		}
		len = temp_len + 1;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	int		count;
	int		status;
	char	**res;

	count = ft_count_occurence(s, c);
	res = NULL;
	res = malloc((count + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	status = ft_fill_tab(s, c, res, count);
	if (status <= 0)
	{
		status = -status;
		while (status >= 0)
			free(res[status--]);
		free(res);
		return (NULL);
	}
	res[count] = NULL;
	return (res);
}
