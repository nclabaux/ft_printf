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

int		main()
{
	int i;
	int	original;
	int	homemade;

	i = '!';
	ft_printf("\t\tTests sur les caracteres :\n\n")
	while (i < 127)
	{
		homemade = ft_printf("%c\t", i);
		original = printf("%c\n", i);
		if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
		if (i % 8 == 7)
			delay();
		i++;
	}
	delay();
	homemade = ft_printf("0\n%c\n", 0);
	original = printf("%c\n\n", 0);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage 0\n%0c0\n", 42);
	original = printf("%0c\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage 1\n%1c0\n", 42);
	original = printf("%1c\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage >\n%2c0\n", 42);
	original = printf("%2c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -0\n%-0c0\n", 42);
	original = printf("%-0c\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -1\n%-1c0\n", 42);
	original = printf("%-1c\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage ->\n%-2c0\n", 42);
	original = printf("%-2c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *0\n%*c0\n", 0, 42);
	original = printf("%*c\n\n", 0, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *1\n%*c0\n", 1, 42);
	original = printf("%*c\n\n", 1, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *>\n%*c0\n", 2, 42);
	original = printf("%*c0\n\n", 2, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *-0\n%*c0\n", -0, 42);
	original = printf("%*c\n\n", -0, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *-1\n%*c0\n", -1, 42);
	original = printf("%*c\n\n", -1, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *->\n%*c0\n", -2, 42);
	original = printf("%*c0\n\n", -2, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*0\n%-*c0\n", 0, 42);
	original = printf("%-*c\n\n", 0, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*1\n%-*c0\n", 1, 42);
	original = printf("%-*c\n\n", 1, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*>\n%-*c0\n", 2, 42);
	original = printf("%-*c0\n\n", 2, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*c0\n", -0, 42);
	original = printf("%-*c\n\n", -0, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*-1\n%-*c0\n", -1, 42);
	original = printf("%-*c\n\n", -1, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*->\n%-*c0\n", -2, 42);
	original = printf("%-*c0\n\n", -2, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision 0\n%.0c0\n", 42);
	original = printf("%.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision <\n%.1c0\n", 42);
	original = printf("%.1c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision =\n%.11c0\n", 42);
	original = printf("%.11c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision >\n%.20c0\n", 42);
	original = printf("%.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *0\n%.*c0\n", 0, 42);
	original = printf("%.*c0\n\n", 0, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *<\n%.*c0\n", 1, 42);
	original = printf("%.*c0\n\n", 1, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *=\n%.*c0\n", 11, 42);
	original = printf("%.*c0\n\n", 11, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *>\n%.*c0\n", 20, 42);
	original = printf("%.*c0\n\n", 20, 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0c0\n", 42);
	original = printf("%0.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1c0\n", 42);
	original = printf("%0.1c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11c0\n", 42);
	original = printf("%0.11c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20c0\n", 42);
	original = printf("%0.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <.0\n%1.0c0\n", 42);
	original = printf("%1.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R =.0\n%11.0c0\n", 42);
	original = printf("%11.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >.0\n%20.0c0\n", 42);
	original = printf("%20.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0c0\n", 42);
	original = printf("%-0.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0c0\n", 42);
	original = printf("%-1.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0c0\n", 42);
	original = printf("%-11.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0c0\n", 42);
	original = printf("%-20.0c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <<<\n%1.2c0\n", 42);
	original = printf("%1.2c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <><\n%2.1c0\n", 42);
	original = printf("%2.1c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <<=\n%5.11c0\n", 42);
	original = printf("%5.11c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R =><\n%11.5c0\n", 42);
	original = printf("%11.5c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <<>\n%5.20c0\n", 42);
	original = printf("%5.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >><\n%20.5c0\n", 42);
	original = printf("%20.5c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R =<>\n%11.20c0\n", 42);
	original = printf("%11.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >>=\n%20.11c0\n", 42);
	original = printf("%20.11c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ><>\n%15.20c0\n", 42);
	original = printf("%15.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >>>\n%20.15c0\n", 42);
	original = printf("%20.15c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2c0\n", 42);
	original = printf("%-1.2c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1c0\n", 42);
	original = printf("%-2.1c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11c0\n", 42);
	original = printf("%-5.11c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5c0\n", 42);
	original = printf("%-11.5c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20c0\n", 42);
	original = printf("%-5.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5c0\n", 42);
	original = printf("%-20.5c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20c0\n", 42);
	original = printf("%-11.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11c0\n", 42);
	original = printf("%-20.11c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20c0\n", 42);
	original = printf("%-15.20c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15c0\n", 42);
	original = printf("%-20.15c0\n\n", 42);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	delay();


	printf("\t\tTests sur les chaines :\n\n");
	delay();
	
	homemade = ft_printf("s + NULL\n\n%s\n", NULL);
	original = printf("%s\n\n", NULL);
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("empty string\n%s0\n", "");
	original = printf("%s0\n\n", "");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("%s\n", "test string");
	original = printf("%s\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage 0\n%0s0\n", "test string");
	original = printf("%0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage <\n%1s0\n", "test string");
	original = printf("%1s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage =\n%11s0\n", "test string");
	original = printf("%11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage >\n%20s0\n", "test string");
	original = printf("%20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -0\n%-0s0\n", "test string");
	original = printf("%-0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -<\n%-1s0\n", "test string");
	original = printf("%-1s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -=\n%-11s0\n", "test string");
	original = printf("%-11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage ->\n%-20s0\n", "test string");
	original = printf("%-20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *0\n%*s0\n", 0, "test string");
	original = printf("%*s0\n\n", 0, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *-0\n%*s0\n", -0, "test string");
	original = printf("%*s0\n\n", -0, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*0\n%-*s0\n", 0, "test string");
	original = printf("%-*s0\n\n", 0, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*s0\n", -0, "test string");
	original = printf("%-*s0\n\n", -0, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *<\n%*s0\n", 1, "test string");
	original = printf("%*s0\n\n", 1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *=\n%*s0\n", 11, "test string");
	original = printf("%*s0\n\n", 11, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *>\n%*s0\n", 20, "test string");
	original = printf("%*s0\n\n", 20, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *-<\n%*s0\n", -1, "test string");
	original = printf("%*s0\n\n", -1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*<\n%-*s0\n", 1, "test string");
	original = printf("%-*s0\n\n", 1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*-<\n%-*s0\n", -1, "test string");
	original = printf("%-*s0\n\n", -1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *-=\n%*s0\n", -1, "test string");
	original = printf("%*s0\n\n", -1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*=\n%-*s0\n", 11, "test string");
	original = printf("%-*s0\n\n", 11, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*-=\n%-*s0\n", -11, "test string");
	original = printf("%-*s0\n\n", -11, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage *->\n%*s0\n", -20, "test string");
	original = printf("%*s0\n\n", -1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*>\n%-*s0\n", 20, "test string");
	original = printf("%-*s0\n\n", 1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("remplissage -*->\n%-*s0\n", -20, "test string");
	original = printf("%-*s0\n\n", -1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision 0\n%.0s0\n", "test string");
	original = printf("%.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision <\n%.1s0\n", "test string");
	original = printf("%.1s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision =\n%.11s0\n", "test string");
	original = printf("%.11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision >\n%.20s0\n", "test string");
	original = printf("%.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *0\n%.*s0\n", 0, "test string");
	original = printf("%.*s0\n\n", 0, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *<\n%.*s0\n", 1, "test string");
	original = printf("%.*s0\n\n", 1, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *=\n%.*s0\n", 11, "test string");
	original = printf("%.*s0\n\n", 11, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("precision *>\n%.*s0\n", 20, "test string");
	original = printf("%.*s0\n\n", 20, "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0s0\n", "test string");
	original = printf("%0.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1s0\n", "test string");
	original = printf("%0.1s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11s0\n", "test string");
	original = printf("%0.11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20s0\n", "test string");
	original = printf("%0.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <.0\n%1.0s0\n", "test string");
	original = printf("%1.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R =.0\n%11.0s0\n", "test string");
	original = printf("%11.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >.0\n%20.0s0\n", "test string");
	original = printf("%20.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0s0\n", "test string");
	original = printf("%-0.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0s0\n", "test string");
	original = printf("%-1.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0s0\n", "test string");
	original = printf("%-11.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0s0\n", "test string");
	original = printf("%-20.0s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <<<\n%1.2s0\n", "test string");
	original = printf("%1.2s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <><\n%2.1s0\n", "test string");
	original = printf("%2.1s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <<=\n%5.11s0\n", "test string");
	original = printf("%5.11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R =><\n%11.5s0\n", "test string");
	original = printf("%11.5s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R <<>\n%5.20s0\n", "test string");
	original = printf("%5.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >><\n%20.5s0\n", "test string");
	original = printf("%20.5s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R =<>\n%11.20s0\n", "test string");
	original = printf("%11.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >>=\n%20.11s0\n", "test string");
	original = printf("%20.11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ><>\n%15.20s0\n", "test string");
	original = printf("%15.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R >>>\n%20.15s0\n", "test string");
	original = printf("%20.15s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2s0\n", "test string");
	original = printf("%-1.2s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1s0\n", "test string");
	original = printf("%-2.1s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11s0\n", "test string");
	original = printf("%-5.11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5s0\n", "test string");
	original = printf("%-11.5s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20s0\n", "test string");
	original = printf("%-5.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5s0\n", "test string");
	original = printf("%-20.5s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20s0\n", "test string");
	original = printf("%-11.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11s0\n", "test string");
	original = printf("%-20.11s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20s0\n", "test string");
	original = printf("%-15.20s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15s0\n", "test string");
	original = printf("%-20.15s0\n\n", "test string");
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\");
	delay();
	delay();


	printf("\t\tTests sur les pointeurs :\n\n");
	delay();

	homemade = ft_printf("")
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
