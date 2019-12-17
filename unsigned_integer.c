/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:47:44 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/13 14:34:25 by nclabaux         ###   ########.fr       */
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
		while (j < (*aflags).padding - (*aflags).precision - digit_number(x))
		{
			ft_putchar_fd(' ', 1);
			i++;
			j++;
			(*result)++;
		}
	}
	while (j < (*aflags).position - digit_number(x) - 1)
	{
		ft_putchar_fd('0', 1);
		i++;
		j++;
		(*result)++;
	}
	ft_putstr_fd(ft_nbr_base(x, "0123456789"), 1);
	if ((*aflags).position == -1)
	{
		while (j < (*aflags).padding - (*aflags).precision - digit_number(x))
		{
			ft_putchar_fd(' ', 1);
			i++;
			j++;
			(*result)++;
		}
	}
	return (i + 1);
}
