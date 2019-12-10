/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:58:44 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/10 16:45:55 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#define DELAY 400000000

void	delay()
{
	int	i;

	for (i = 0; i < DELAY; i++)
	{}
}

int main()
{
	int i;

	i = -128;
	while (i < 127)
	{
		ft_printf("%c\t", i);
		printf("%c\n", i);
		if (i % 8 == 7 && i > '!')
			delay();
		i++;
	}
	delay();
	ft_printf("s + NULL\n\n%s\n", NULL);
	printf("%s\n\n", NULL);
	delay();
	ft_printf("empty string\n%s0\n", "");
	printf("%s0\n\n", "");
	delay();
	ft_printf("%s\n", "test string");
	printf("%s\n\n", "test string");
	delay();
	ft_printf("precision 0\n%0s0\n", "test string");
	printf("%0s0\n\n", "test string");
	delay();
	ft_printf("precision <\n%1s0\n", "test string");
	printf("%1s0\n\n", "test string");
	delay();
	ft_printf("precision =\n%11s0\n", "test string");
	printf("%11s0\n\n", "test string");
	delay();
	ft_printf("precision >\n%20s0\n", "test string");
	printf("%20s0\n\n", "test string");
	delay();
	ft_printf("precision -0\n%-0s0\n", "test string");
	printf("%-0s0\n\n", "test string");
	delay();
	ft_printf("precision -<\n%-1s0\n", "test string");
	printf("%1s0\n\n", "test string");
	delay();
	ft_printf("precision -=\n%-11s0\n", "test string");
	printf("%11s0\n\n", "test string");
	delay();
	ft_printf("precision ->\n%-20s0\n", "test string");
	printf("%20s0\n\n", "test string");
	delay();
//	ft_printf("%d %d %d %d %d\n", -2147483648, -1, 0, 1, 2147483647);
//	printf("%d %d %d %d %d\n", -2147483648, -1, 0, 1, 2147483647);
//	ft_printf("%i %i %i %i %i\n", -2147483648, -1, 0, 1, 2147483647);
//	printf("%i %i %i %i %i\n", -2147483648, -1, 0, 1, 2147483647);
//	ft_printf("%u %u %u %u %u\n", -2147483648, -1, 0, 1, 2147483647);
//	printf("%u %u %u %u %u\n", -2147483648, -1, 0, 1, 2147483647);
//	ft_printf("%x %x %x %x %x\n", -2147483647, -1, 0, 1, 2147483647);
//	printf("%x %x %x %x %x\n", -2147483647, -1, 0, 1, 2147483647);
//	ft_printf("%X %X %X %X %X\n", -2147483647, -1, 0, 1, 2147483647);
//	printf("%X %X %X %X %X\n", -2147483647, -1, 0, 1, 2147483647);
//	ft_printf("%p\n", 4294967295);
//	printf("%p\n", 4294967295);
}
