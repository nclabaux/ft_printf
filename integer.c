/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/06 19:02:58 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	integer(va_list *aap, int i, t_flag *aflags, int *result)
{
	int	j;
	int	x;

	j = -1;
	x = va_arg(*aap, int);
	if ((*aflags).position == 1)
	{
		while (++j < (*aflags).padding - ft_max((*aflags).precision, digit_number(x)))
		{
			ft_putchar_fd(' ', 1);
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
	ft_putnbr_fd(x, 1);
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

void	ft_putspace(int *result)
{
	ft_putchar_fd(' ', 1);
	(*result)++;
}
