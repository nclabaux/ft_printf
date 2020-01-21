/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 15:23:11 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 17:43:21 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_hexa(va_list *aap, int i, t_flag *afl, int *g_res, char *s)
{
	long	x;

	x = va_arg(*aap, long);
	if ((*afl).plus && (*afl).filler == '0')
		ft_putchar_cpt('+', g_res);
	if ((*afl).position == 1)
		ft_padding_hex(g_res, afl, x);
	if ((*afl).plus && (*afl).filler == ' ')
		ft_putchar_cpt('+', g_res);
	ft_precision_hex(g_res, afl, x);
	if (!(*afl).prec && (*afl).modified)
	{
		if ((*afl).pad)
			ft_putchar_cpt((*afl).filler, g_res);
	}
	else
	{
		if (s[i] == 'x')
			ft_putstr_fd(ft_nbr_base(x, "0123456789abcdef"), 1);
		else if (s[i] == 'X')
			ft_putstr_fd(ft_nbr_base(x, "0123456789ABCDEF"), 1);
		(*g_res) += ft_dgt_nbr_hex(x);
	}
	if ((*afl).position == -1)
		ft_padding_hex(g_res, afl, x);
	return (i + 1);
}

void	ft_padding_hex(int *g_res, t_flag *afl, int x)
{
	int	j;

	j = 0;
	while(j < (*afl).pad - ft_max((*afl).prec, ft_dgt_nbr_hex(x)) - (*afl).plus)
	{
		ft_putchar_cpt((*afl).filler, g_res);
		j++;
	}
}

void	ft_precision_hex(int *g_res, t_flag *afl, int x)
{
	int	j;

	j = 0;
	while (j < (*afl).prec - ft_dgt_nbr_hex(x))
	{
		ft_putchar_cpt('0', g_res);
		j++;
	}
}
