/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:29:48 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 18:05:40 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_res;

int		ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	g_res = 0;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			i++;
			g_res++;
		}
		if (str[i] == '%')
		{
			i = ft_flag_rd(&ap, str, i + 1);
		}
	}
	va_end(ap);
	return (g_res);
}

int		ft_flag_rd(va_list *aap, const char *str, int i)
{
	t_flag	flags;

	ft_flag_init(&flags);
	while (str[i] == '-' || str[i] == '+' || str[i] == '0')
	{
		if (str[i] == '-')
		{
			flags.position = -1;
			flags.filler = ' ';
		}
		if (str[i] == '+')
			flags.plus = 1;
		if (str[i] == '0' && flags.position == 1)
			flags.filler = '0';
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		flags.pad = ft_atoi(str + i);
		i += ft_digit_nbr(flags.pad);
	}
	else if (str[i] == '*')
	{
		flags.pad = va_arg(*aap, int);
		if (flags.pad < 0)
		{
			flags.pad *= -1;
			flags.position = -1;
			flags.filler = ' ';
		}
		i++;
	}
	if (str[i] == '.')
	{
		i = ft_prec_rd(aap, &flags, i + 1, str);
		flags.filler = ' ';
	}
	i = ft_arg_rd(aap, str, i, &flags);
	return (i);
}

int		ft_arg_rd(va_list *aap, const char *str, int i, t_flag *afl)
{
	if (str[i] == 'c')
		i = ft_character(aap, i, afl, &g_res);
	else if (str[i] == 's')
		i = ft_string(aap, i, afl, &g_res);
	else if (str[i] == 'd' || str[i] == 'i')
		i = ft_integer(aap, i, afl, &g_res);
	else if (str[i] == 'u')
		i = ft_unsigned_int(aap, i, afl, &g_res);
	else if (str[i] == 'p')
		i = ft_pointeur(aap, i, afl, &g_res);
	else if (str[i] == 'x' || str[i] == 'X')
		i = ft_hexa(aap, i, afl, &g_res, (char*)str);
	else if (str[i] == '%')
		i = ft_percent(i, afl, &g_res);
	return (i);
}

void	ft_flag_init(t_flag *afl)
{
	(*afl).plus = 0;
	(*afl).pad = 0;
	(*afl).prec = 0;
	(*afl).position = 1;
	(*afl).modified = 0;
	(*afl).filler = ' ';
}

int		ft_prec_rd(va_list *aap, t_flag *afl, int i, const char *str)
{
	(*afl).modified = 1;
	while (str[i] == '0')
		i++;
	if (ft_isdigit(str[i]))
	{
		(*afl).prec = ft_atoi(str + i);
		i += ft_digit_nbr((*afl).prec);
	}
	else if (str[i] == '*')
	{
		(*afl).prec = va_arg(*aap, int);
		i++;
	}
	if ((*afl).prec < 0)
		(*afl).modified = 0;
	return (i);
}
