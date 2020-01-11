/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:29:48 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/11 15:30:45 by nclabaux         ###   ########.fr       */
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
			i = flag_reader(&ap, str, i + 1);
		}
	}
	va_end(ap);
	return (g_res);
}

int		flag_reader(va_list *aap, const char *str, int i)
{
	t_flag	flags;

	flag_init(&flags);
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			flags.position = -1;
	if (ft_isdigit(str[i]))
	{
		flags.padding = ft_atoi(str + i);
		i += digit_nbr(flags.padding);
	}
	else if (str[i] == '*')
	{
		flags.padding = va_arg(*aap, int);
		if (flags.padding < 0)
		{
			flags.padding *= -1;
			flags.position = -1;
		}
		i++;
	}
	if (str[i] == '.')
		prec_read(aap, &flags, &i, str);
	i = arg_reader(aap, str, i, &flags);
	return (i);
}

int		arg_reader(va_list *aap, const char *str, int i, t_flag *afl)
{
	if (str[i] == 'c')
		i = character(aap, i, afl, &g_res);
	else if (str[i] == 's')
		i = string(aap, i, afl, &g_res);
	else if (str[i] == 'd' || str[i] == 'i')
		i = integer(aap, i, afl, &g_res);
	else if (str[i] == 'u')
		i = unsigned_integer(aap, i, afl, &g_res);
	else if (str[i] == 'p')
		i = pointeur(aap, i, afl, &g_res);
	else if (str[i] == 'x')
		i = min_hexa(aap, i, afl, &g_res);
	else if (str[i] == 'X')
		i = max_hexa(aap, i, afl, &g_res);
	return (i);
}

void	flag_init(t_flag *afl)
{
	(*afl).padding = 0;
	(*afl).prec = 0;
	(*afl).position = 1;
	(*afl).modified = 0;
}

void	prec_read(va_list *aap, t_flag *afl, int *ai, const char *str)
{
	(*afl).modified = 1;
	if (ft_isdigit(str[++(*ai)]))
	{
		(*afl).prec = ft_atoi(str + (*ai));
		(*ai) += digit_nbr((*afl).prec);
	}
	else if (str[(*ai)++] == '*')
		(*afl).prec = va_arg(*aap, int);
}
