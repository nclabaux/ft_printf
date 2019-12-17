/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:50:28 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/14 17:00:35 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		digit_number(int x)
{
	int	i;

	if (!x)
		return(1);
	i = 0;
	while (x)
	{
		i++;
		x = x / 10;
	}
	return (i);
}

void	ft_putstr_nb_fd(char *str, int size, int fd)
{
	int	i;

	i = 0;
	while (i < size && str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

int		ft_min(int x, int y)
{
	if (x < y)
		return (x);
	return (y);
}

int		ft_max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}
