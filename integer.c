/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/10 13:18:17 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	integer(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int	j;
	int	x;

	j = 0;
	x = va_arg(*aap, int);
	if ((*afl).position == 1)
	{
		while (j++ < (*afl).padding - ft_max((*afl).prec, digit_nbr(x)))
			ft_putspace(g_res);
	}
	j = 0;
	while (j < (*afl).prec - digit_nbr(x))
	{
		ft_putzero(g_res);
		j++;
	}
	ft_putnbr_fd(x, 1);
	(*g_res) += digit_nbr(x);
	if ((*afl).position == -1)
	{
		while (j++ < (*afl).padding - digit_nbr(x))
			ft_putspace(g_res);
	}
	return (i + 1);
}
