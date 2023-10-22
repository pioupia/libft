/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 10:21:31 by pioupia           #+#    #+#             */
/*   Updated: 2023/10/19 10:58:32 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	ft_fill_char(char *res, int n, int size)
{
	int	i;

	i = size - 2;
	if (n == 0)
	{
		res[0] = '0';
		res[1] = '\0';
	}
	if (n < 0)
	{
		res[0] = '-';
		res[i--] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (n != 0)
	{
		res[i--] = (n % 10) + '0';
		n /= 10;
	}
	res[size - 1] = '\0';
}

char	*ft_itoa(int n)
{
	int		size;
	int		temp_n;
	char	*res;

	size = 1;
	temp_n = n;
	while (temp_n != 0)
	{
		temp_n /= 10;
		size++;
	}
	if (n == 0 || n < 0)
		size++;
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_fill_char(res, n, size);
	return (res);
}
