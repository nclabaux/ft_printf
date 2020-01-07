/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/06 18:59:36 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	character(va_list *aap, int i, t_flag *aflags, int *result)
{
	int	j;

	j = 0;
	if ((*aflags).position == 1)
	{
		while (j < (*aflags).padding - 1)
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
		while (j < (*aflags).padding - 1)
		{
			ft_putchar_fd(' ', 1);
			j++;
			(*result)++;
		}
	}
	return (i + 1);
}
