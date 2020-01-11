/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:47:44 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/11 17:14:37 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_integer(va_list *aap, int i, t_flag *afl, int *g_res)
{
	int				j;
	unsigned long	x;
	int				size;

	j = 0;
	x = (unsigned long)va_arg(*aap, long);
	size = ft_strlen(ft_nbr_base(x, "0123456789"));
	ft_printf("size : %d\n", size);
	if ((*afl).position == 1)
	{
		while (j++ < (*afl).padding - ft_max((*afl).prec, size))
			ft_putspace(g_res);
	}
	j = 0;
	while (j++ < (*afl).prec - size)
		ft_putzero(g_res);
	ft_putstr_fd(ft_nbr_base(x, "0123456789"), 1);
	(*g_res) += size;
	if ((*afl).position == -1)
	{
		while (j++ < (*afl).padding - digit_nbr(x))
			ft_putspace(g_res);
	}
	return (i + 1);
}
