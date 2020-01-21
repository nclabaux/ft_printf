/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 13:48:01 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 17:50:50 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percent(int i, t_flag *afl, int *g_res)
{
	if ((*afl).position == 1)
		ft_padding_pct(g_res, afl);
	ft_putchar_cpt('%', g_res);
	if ((*afl).position == -1)
		ft_padding_pct(g_res, afl);
	return (i + 1);
}

void	ft_padding_pct(int *g_res, t_flag *afl)
{
	int	j;

	j = 0;
	while (j < (*afl).pad - 1)
	{
		ft_putchar_cpt((*afl).filler, g_res);
		j++;
	}
}
