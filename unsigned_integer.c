/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:47:44 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 17:00:22 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int	ft_unsigned_int(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int		j;
	long	x;
	char	*res;

	x = va_arg(*aap, unsigned int);
	res = ft_nbr_base(x, "0123456789");
	if ((*afl).position == 1)
	{
		j = 0;
		while (j++ < (*afl).pad - ft_max((*afl).prec, (int)ft_strlen(res)))
			ft_fill(g_res, (*afl).filler);
	}
	j = 0;
	while (j++ < (*afl).prec - (int)ft_strlen(res))
		ft_putzero(g_res);
	ft_putstr_fd(res, 1);
	(*g_res) += ft_strlen(res);
	if ((*afl).position == -1)
	{
		j = 0;
		while (j++ < (*afl).pad - ft_max((*afl).prec, (int)ft_strlen(res)))
			ft_fill(g_res, (*afl).filler);
	}
	return (i + 1);
}
*/

int	ft_unsigned_int(va_list *aap, int i, t_flag *afl, int *g_res)
{
	long	x;
	char	*res;
	int		len;

	x = va_arg(*aap, unsigned int);
	res = ft_nbr_base(x, "0123456789");
	len = ft_strlen(res);
	if ((*afl).position == 1)
		ft_padding_ui(g_res, afl, len);
	ft_precision_ui(g_res, afl, len);
	if (!(*afl).prec && (*afl).modified)
	{
		if ((*afl).pad)
			ft_putchar_cpt((*afl).filler, g_res);
	}
	else
	{
		ft_putstr_fd(res, 1);
		(*g_res) += len;
	}
	if ((*afl).position == -1)
		ft_padding_ui(g_res, afl, len);
	return (i + 1);
}

void	ft_padding_ui(int *g_res, t_flag *afl, int len)
{
	int	j;

	j = 0;
	while (j < (*afl).pad - ft_max(len,(*afl).prec))
	{
		ft_putchar_cpt((*afl).filler, g_res);
		j++;
	}
}

void	ft_precision_ui(int *g_res, t_flag *afl, int len)
{
	int	j;

	j = 0;
	while (j < (*afl).prec - len)
	{
		ft_putchar_cpt('0', g_res);
		j++;
	}
}
