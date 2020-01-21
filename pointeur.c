/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointeur.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 18:46:16 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_pointeur(va_list *aap, int i, t_flag *afl, int *g_res)
{
	long long	x;

	x = va_arg(*aap, long long);
	if ((*afl).plus && (*afl).filler == '0')
		ft_putchar_cpt('+', g_res);
	if ((*afl).position == 1)
		ft_padding_pnt(g_res, afl, x);
	if ((*afl).plus && (*afl).filler == ' ')
		ft_putchar_cpt('+', g_res);
	ft_putstr_fd("0x", 1);
	(*g_res) += 2;
	ft_precision_pnt(g_res, afl, x);
	if (!(*afl).prec && (*afl).modified)
	{
		if ((*afl).pad && x)
			ft_putchar_cpt((*afl).filler, g_res);
	}
	else
	{
		ft_putstr_fd(ft_nbr_base(x, "0123456789abcdef"), 1);
		(*g_res) += ft_dgt_nbr_hex(x);
	}
	if ((*afl).position == -1)
		ft_padding_pnt(g_res, afl, x);
	return (i + 1);
}

void	ft_padding_pnt(int *g_res, t_flag *afl, int x)
{
	int	j;
	int	z;

	z = 2;
	if (!x)
		z = 0;
	j = 2 + z;
	while (j < (*afl).pad - ft_max((int)ft_dgt_nbr_hex(x) - (*afl).modified, (*afl).prec))
	{
		ft_putchar_cpt(' ', g_res);
		j++;
	}
}

void	ft_precision_pnt(int *g_res, t_flag *afl, int x)
{
	int j;

	j = 0;
	while (j < (*afl).prec - ft_dgt_nbr_hex(x))
	{
		ft_putchar_cpt('0', g_res);
		j++;
	}
}
