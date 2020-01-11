/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:49:50 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/10 13:13:49 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	min_hexa(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int				j;
	unsigned int	x;

	j = -1;
	x = va_arg(*aap, unsigned int);
	if ((*afl).position == 1)
	{
		while (++j < (*afl).padding - ft_max((*afl).prec, digit_nbr_hex(x)))
			ft_putspace(g_res);
	}
	j = -1;
	while (++j < (*afl).prec - digit_nbr_hex(x))
		ft_putzero(g_res);
	ft_putstr_fd(ft_nbr_base(x, "0123456789abcdef"), 1);
	(*g_res) += digit_nbr_hex(x);
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
