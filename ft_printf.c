/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:49:38 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/06 14:30:26 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	result;

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	result = 0;
	//secure va_start ?
	va_start(ap, str);
	i = 0;
	while (str[i]) 
	{
		while (str[i] && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			i++;
			result++;
		}
		if (str[i] == '%')
		{
			i = flag_reader(&ap, str, i + 1);
		}
	}
	va_end(ap);
	return (result);
}

int	flag_reader(va_list *aap, const char *str, int i)
{
	t_flag	flags;

	flag_init(&flags);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flags.position = -1;
		i++;
	}
	if (ft_isdigit(str[i]))
	{
		flags.padding = ft_atoi(str + i);
		i += digit_number(flags.padding);
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
	{
		i++;
		flags.modified = 1;
		if (ft_isdigit(str[i]))
		{
		flags.precision = ft_atoi(str + i);
		i += digit_number(flags.precision);
		}
		else if (str[i] == '*')
		{
			flags.precision = va_arg(*aap, int);
			i++;
		}
	}
	i = arg_reader(aap, str, i, &flags);
	return (i);
}


int	arg_reader(va_list *aap, const char *str, int i, t_flag *aflags)
{
	if (str[i] == 'c')
		i = character(aap, i, aflags, &result);
	else if (str[i] == 's')
		i = string(aap, i, aflags, &result);
	else if (str[i] == 'd' || str[i] == 'i')
		i = integer(aap, i, aflags, &result);
	else if (str[i] == 'u')
		i = unsigned_integer(aap, i, aflags, &result);
	else if (str[i] == 'p')
		i = pointeur(aap, i, aflags, &result);
	else if (str[i] == 'x')
		i = min_hexa(aap, i, aflags, &result);
	else if (str[i] == 'X')
		i = max_hexa(aap, i, aflags, &result);
	return (i);
}

void	flag_init(t_flag *aflags)
{
	(*aflags).padding = 0;
	(*aflags).precision = 0;
	(*aflags).position = 1;
	(*aflags).modified = 0;
}
