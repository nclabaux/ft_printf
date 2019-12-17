/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/13 14:26:00 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	integer(va_list *aap, int i, t_flag *aflags, int *result)
{
	int	j;
	int	x;

	j = 0;
	x = va_arg(*aap, int);
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
	ft_putnbr_fd(x, 1);
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
