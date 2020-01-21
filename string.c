/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:56:57 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 15:54:04 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
int		ft_string(va_list *aap, int i, t_flag *afl, int *g_res)
{
	char	*s;
	char	*null;
	int		j;
	int		len;
	int		filling;

	j = 0;
	s = va_arg(*aap, char *);
	null = ft_strdup("(null)");
	if (s == NULL)
		s = null;
	if (ft_memcmp(s, "", 1))
	{
		if ((*afl).modified)
			len = ft_min((int)ft_strlen(s), (*afl).prec);
		else
			len = ft_strlen(s);
		filling = (*afl).pad - len;
		while ((*afl).position == 1 && j++ < filling)
			ft_fill(g_res, (*afl).filler);
		ft_putstr_nb_fd(s, len, 1);
		(*g_res) += len;
		while ((*afl).position == -1 && j++ < (*afl).pad - len)
			ft_fill(g_res, (*afl).filler);
	}
	return (i + 1);
}

void	ft_null(int *(g_res), t_flag *afl)
{
	int	j;

	j = 0;
	if ((*afl).position == 1)
	{
		while (j < (*afl).pad - 6)
		{
			ft_fill(g_res, (*afl).filler);
			j++;
		}
	}
	ft_putstr_fd("(null)", 1);
	(*g_res) += 6;
	if ((*afl).position == -1)
	{
		while (j < (*afl).pad - 6)
		{
			ft_fill(g_res, (*afl).filler);
			j++;
		}
	}
}
*/

int		ft_string(va_list *aap, int i, t_flag *afl, int *g_res)
{
	char	*s;
	int		len;

	s = va_arg(*aap, char *);
	if (s == NULL)
		s = "(null)";
	len = ft_strlen(s);
	if ((*afl).modified)
		len = ft_min(len, (*afl).prec);
	if ((*afl).position == 1)
		ft_padding_str(g_res, afl, len);
	ft_putstr_nb_cpt(s, len, g_res);
	if ((*afl).position == -1)
		ft_padding_str(g_res, afl, len);
	return (i + 1);
}

void	ft_padding_str(int *g_res, t_flag *afl, int len)
{
	int	j;

	j = 0;
	while (j < (*afl).pad - len)
	{
		ft_putchar_cpt((*afl).filler, g_res);
		j++;
	}
}

void	ft_putstr_nb_cpt(char *s, int len, int *g_res)
{
	int	j;

	j = 0;
	while (j < len && s[j])
	{
		ft_putchar_cpt(s[j], g_res);
		j++;
	}
}
