
#include "ft_printf.h"

int	ft_arg_rd(va_list *aap, char *str, int i)
{
	t_flag	fl;

	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			fl.plus = 1;
		if (str[i] == '-')
			fl.position = -1;
		i++;
	}
	if (str[i] == 0)
	{
		fl.filler = '0';
		i++;
	}
	while (str[i] == '0')
		i++;
	if (ft_isdigit(str[i]))
	{
		fl.pad = ft_atoi(str[i]);
		i += ft_digit_nbr(fl.pad);
	}
	else if (str[i] == '*')
	{
		fl.pad = va_arg(*aap, int);
		i++;
	}
	if (str[i] == '.')
	{
		fl.filler = ' ';
		i++;
	}
	while (str[i] == '0')
		i++;
	if (ft_isdigit(str[i]))
	{
		fl.prec = ft_atoi(str[i]);
		i += ft_digit_nbr(fl.prec);
	}
	else if (str[i] == '*')
	{
		fl.prec = va_arg(*aap, int);
		i += ft_digit_nbr(fl.prec);
	}
	hvzuieuivbiuze;
}