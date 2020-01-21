/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 18:13:50 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_integer(va_list *aap, int i, t_flag *afl, int *g_res)
{
	long	x;
	int		neg;

	x = va_arg(*aap, int);
	neg = 0;
	if (x < 0)
	{
		x = -x;
		neg = 1;
	}
	if ((*afl).plus && (*afl).filler == '0')
		ft_putchar_cpt('+', g_res);
	if ((*afl).position == 1 && (*afl).filler == ' ')
		ft_padding_int(g_res, afl, x, neg);
	if (neg && (x != 2147483648 ))
		ft_putchar_cpt('-', g_res);
	if (x > 2147483647)
		(*g_res)++;
	if ((*afl).position == 1 && (*afl).filler == '0')
		ft_padding_int(g_res, afl, x, neg);
	if ((*afl).plus && (*afl).filler == ' ')
		ft_putchar_cpt('+', g_res);
	ft_precision_int(g_res, afl, x);
	if (!(*afl).prec && (*afl).modified)
	{
		if ((*afl).pad)
			ft_putchar_cpt((*afl).filler, g_res);
	}
	else
	{
		ft_putnbr_fd(x, 1);
		(*g_res) += ft_digit_nbr(x);
	}
	if ((*afl).position == -1)
		ft_padding_int(g_res, afl, x, neg);
	return (i + 1);
}

void	ft_padding_int(int *g_res, t_flag *afl, int x, int n)
{
	int	j;

	j = 0;
	while (j < (*afl).pad - n - ft_max((*afl).prec, ft_digit_nbr(x)) - (*afl).plus)
	{
		ft_putchar_cpt((*afl).filler, g_res);
		j++;
	}
}

void	ft_precision_int(int *g_res, t_flag *afl, int x)
{
	int j;

	j = 0;
	while (j < (*afl).prec - ft_digit_nbr(x))
	{
		ft_putchar_cpt('0', g_res);
		j++;
	}
}
