#include "ft_printf.h"
#include "./libft/libft.h"

//
#include <stdio.h>

int	ft_printf(const char *str, ...)
{
	va_list	ap;	
	int		i;

	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		while (str[i] != '%')
			ft_putchar_fd(str[i++], 1);
		if (str[i + 1] == 'c')
		{
			ft_putchar_fd(va_arg(ap, int), 1);
			i++;
		}
		else if (str[i + 1] == 's')
		{
			ft_putstr_fd(va_arg(ap, char *), 1);
			i++;
		}
		else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		{
			ft_putnbr_fd(va_arg(ap, int), 1);
			i++;
		}
		else if (str[i + 1] == 'u')
		{
			ft_putnbr_fd(va_arg(ap, unsigned int), 1);
			i++;
		}
		else if (str[i + 1] == 'p')
		{
			ft_putnbr_fd((int)va_arg(ap, void *), 1);
			i++;
		}
		i++;
	}
	va_end(ap);
	return (0);
}

int	main()
{
	char			c;
	char			*s;
	int				i;
	int				j;
	unsigned int	u;
	unsigned int	v;
	int				*p;

	c = 'a';
	s = "test";
	i = 42;
	j = -21;
	u = 21;
	v = -42;
	p = &i;
	ft_printf("char : %c\nstring : %s\nint : %d\nint : %i\nunsigned int : %u\nunsigned int : %u\npointer : %p\n", c, s, i, j, u, v, p);
	printf("\nchar : %c\nstring : %s\nint : %d\nint : %i\nunsigned int : %u\nunsigned int : %u\npointer : %p\n", c, s, i, j, u, v, p);
	return (0);
}