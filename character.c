/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/13 15:31:47 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	character(va_list *aap, int i, t_flag *aflags, int *result)
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
			(*result)++;
		}
	}
	ft_putchar_fd((unsigned char)va_arg(*aap, int), 1);
	(*result)++;
	if ((*aflags).position == -1)
	{
		while (j < padding - 1)
		{
			ft_putchar_fd(' ', 1);
			j++;
			(*result)++;
		}
	}
	return (i + 1);
}
