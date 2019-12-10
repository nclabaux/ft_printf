/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/09 17:37:57 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	character(va_list *aap, int i, t_flag *aflags)
{
	int	padding;
	int	j;

	j = 0;
	padding = (*aflags).padding;
	if ((*aflags).position == 1)
	{
		while (j < padding - 1)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
	}
	ft_putchar_fd((unsigned char)va_arg(*aap, int), 1);
	if ((*aflags).position == -1)
	{
		while (j < padding - 1)
		{
			ft_putchar_fd(' ', 1);
			j++;
		}
	}
	return (i + 1);
}
