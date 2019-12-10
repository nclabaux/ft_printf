/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/10 16:11:58 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//
#include <stdio.h>
//

int	string(va_list *aap, int i, t_flag *aflags)
{
	char	*s;
	int		len;
	int		padding;
	int		j;
	int		k;

	j = 0;
	s = va_arg(*aap, char *);
	if (s == NULL)
		ft_putstr_fd("(null)", 1);
	else if (ft_memcmp(s, "", 1))
	{
		k = 0;
		if ((*aflags).modified)
			k = 1;
		len = ft_strlen(s);
		if (k)
			len = 0;
		padding = (*aflags).padding;
		if ((*aflags).position == 1)
		{
			while (j < padding - len - k)
			{
				ft_putchar_fd(' ', 1);
				j++;
			}
		}
		if (k)
			ft_putstr_nb_fd(s, (*aflags).precision, 1);
		else
			ft_putstr_fd(s, 1);
		if ((*aflags).position == -1)
		{
			while (j < padding - len - k)
			{
				ft_putchar_fd(' ', 1);
				j++;
			}
		}
	}
	return (i + 1);
}
