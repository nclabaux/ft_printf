/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/08 18:44:51 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointeur(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int			j;
	long long	x;

	j = 2;
	x = va_arg(*aap, long long);
	if ((*afl).position == 1)
	{
		while (j < (*afl).padding - digit_nbr_hex(x))
		{
			ft_putspace(g_res);
			j++;
		}
	}
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(ft_nbr_base(x, "0123456789abcdef"), 1);
	(*g_res) += digit_nbr_hex(x) + 2;
	if ((*afl).position == -1)
	{
		while (j < (*afl).padding - digit_nbr_hex(x))
		{
			ft_putspace(g_res);
			j++;
		}
	}
	return (i + 1);
}
