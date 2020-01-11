/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/10 13:12:32 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		string(va_list *aap, int i, t_flag *afl, int *g_res)
{
	char	*s;
	int		j;
	int		len;
	int		filling;

	j = 0;
	s = va_arg(*aap, char *);
	if (s == NULL)
		ft_null(g_res);
	else if (ft_memcmp(s, "", 1))
	{
		if ((*afl).modified)
			len = ft_min((int)ft_strlen(s), (*afl).prec);
		else
			len = ft_strlen(s);
		filling = (*afl).padding - len;
		while ((*afl).position == 1 && j++ < filling)
			ft_putspace(g_res);
		ft_putstr_nb_fd(s, len, 1);
		(*g_res) += len;
		while ((*afl).position == -1 && j++ < (*afl).padding - len)
			ft_putspace(g_res);
	}
	return (i + 1);
}

void	ft_null(int *(g_res))
{
	ft_putstr_fd("(null)", 1);
	(*g_res) += 6;
}
