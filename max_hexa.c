/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:49:50 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/10 16:14:35 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	max_hexa(va_list *aap, int i, t_flag *aflags)
{
	int				j;
	unsigned int	x;

	j = 0;
	x = va_arg(*aap, unsigned int);
	if ((*aflags).position == 1)
	{
		while (j < (*aflags).padding - (*aflags).precision - digit_number(x))
		{
			ft_putchar_fd(' ', 1);
			i++;
			j++;
		}
	}
	while (j < (*aflags).position - digit_number(x) - 1)
	{
		ft_putchar_fd('0', 1);
		i++;
		j++;
	}
	ft_putstr_fd(ft_nbr_base(x, "0123456789ABCDEF"), 1);
	if ((*aflags).position == -1)
	{
		while (j < (*aflags).padding - (*aflags).precision - digit_number(x))
		{
			ft_putchar_fd(' ', 1);
			i++;
			j++;
		}
	}
	return (i + 1);
}
