/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:47:44 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/06 16:09:23 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_integer(va_list *aap, int i, t_flag *aflags, int *result)
{
	int				j;
	unsigned long	x;

	j = 0;
	x = (unsigned long)va_arg(*aap, unsigned long);
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
	ft_putstr_fd(ft_nbr_base(x, "0123456789"), 1);
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
