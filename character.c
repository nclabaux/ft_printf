/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/10 13:06:00 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	character(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int	j;

	j = 0;
	if ((*afl).position == 1)
	{
		while (j < (*afl).padding - 1)
		{
			ft_putspace(g_res);
			j++;
		}
	}
	ft_putchar_fd((unsigned char)va_arg(*aap, int), 1);
	(*g_res)++;
	if ((*afl).position == -1)
	{
		while (j < (*afl).padding - 1)
		{
			ft_putspace(g_res);
			j++;
		}
	}
	return (i + 1);
}
