/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/17 16:14:32 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//
#include <stdio.h>
//

int	string(va_list *aap, int i, t_flag *aflags, int *result)
{
	char	*s;
	int		j;
	int		len;
	int		filling;

	j = 0;
	s = va_arg(*aap, char *);
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		(*result) += 6;
	}
	else if (ft_memcmp(s, "", 1))
	{
		if ((*aflags).modified)
		{
			len = ft_min((int)ft_strlen(s), (*aflags).precision);
		}
		else
			len = ft_strlen(s);
		filling = (*aflags).padding - len;
		while ((*aflags).position == 1 && j < filling)
		{
			ft_putchar_fd(' ', 1);
			j++;
			(*result)++;
		}
		ft_putstr_nb_fd(s, len, 1);
		(*result) += len;
		while ((*aflags).position == -1 && j < (*aflags).padding - len)
		{
			ft_putchar_fd(' ', 1);
			j++;
			(*result)++;
		}
	}
	return (i + 1);
}
