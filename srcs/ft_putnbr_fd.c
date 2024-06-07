/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:02:30 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/07 06:59:16 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/libft.h"

static void	ft_fill_char(char *res, int n, int size)
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

void	ft_putnbr_fd(int n, int fd)
{
	int		size;
	int		temp_n;
	char	res[12];

	size = 1;
	temp_n = n;
	res[11] = '\0';
	while (temp_n != 0)
	{
		temp_n /= 10;
		size++;
	}
	if (n == 0 || n < 0)
		size++;
	ft_fill_char(res, n, size);
	write(fd, res, ft_strlen(res));
}
