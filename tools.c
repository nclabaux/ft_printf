/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 16:34:36 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 19:03:21 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_cpt(char c, int *g_res)
{
	ft_putchar_fd(c, 1);
	(*g_res)++;
}

int		ft_digit_nbr(int x)
{
	int	i;

	if (!x)
		return (1);
	i = 0;
	while (x)
	{
		i++;
		x = x / 10;
	}
	return (i);
}

int		ft_dgt_nbr_hex(long long x)
{
	int	i;

	if (!x)
		return (1);
	i = 0;
	while (x)
	{
		i++;
		x = x / 16;
	}
	return (i);
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
