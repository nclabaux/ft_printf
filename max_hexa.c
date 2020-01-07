/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:49:50 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/06 16:25:17 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	max_hexa(va_list *aap, int i, t_flag *aflags, int *result)
{
	int				j;
	unsigned int	x;

	j = 0;
	x = va_arg(*aap, unsigned int);
	if ((*aflags).position == 1)
	{
		while (j < (*aflags).padding - ft_max((*aflags).precision, digit_number(x)))
		{
			ft_putchar_fd(' ', 1);
			j++;
			(*result)++;
		}
	}
	j = 0;
	while (j < (*aflags).precision - digit_number(x))
	{
		ft_putchar_fd('0', 1);
		j++;
		(*result)++;
	}
	ft_putstr_fd(ft_nbr_base(x, "0123456789ABCDEF"), 1);
	if ((*aflags).position == -1)
	{
		while (j < (*aflags).padding - digit_number(x))
		{
			ft_putchar_fd(' ', 1);
			j++;
			(*result)++;
		}
	}
	return (i + 1);
}
