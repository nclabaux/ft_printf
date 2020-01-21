/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   character.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/15 16:50:36 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int	ft_character(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int	j;

	j = 0;
	if ((*afl).position == 1)
	{
		while (j < (*afl).pad - 1)
		{
			ft_fill(g_res, (*afl).filler);
			j++;
		}
	}
	ft_putchar_fd((unsigned char)va_arg(*aap, int), 1);
	(*g_res)++;
	if ((*afl).position == -1)
	{
		while (j < (*afl).pad - 1)
		{
			ft_fill(g_res, (*afl).filler);
			j++;
		}
	}
	return (i + 1);
}
*/
int	ft_character(va_list *aap, int i, t_flag *afl, int *g_res)
{
	unsigned char	c;

	c = (unsigned char)va_arg(*aap, int);
	if ((*afl).position == 1)
		ft_padding_char(g_res, afl);
	ft_putchar_cpt(c, g_res);
	if ((*afl).position == -1)
		ft_padding_char(g_res, afl);
	return (i + 1);
}

void	ft_padding_char(int *g_res, t_flag *afl)
{
	int j;

	j = 0;
	while (j < (*afl).pad - 1)
	{
		ft_putchar_cpt((*afl).filler, g_res);
		j++;
	}
}
