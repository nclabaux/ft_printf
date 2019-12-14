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
		delay();
		if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
		i++;
	}
	delay();
	homemade = ft_printf("0\n%c\n", 0);
	original = printf("%c\n\n", 0);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage 0\n%0c0\n", 42);
	original = printf("%0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage 1\n%1c0\n", 42);
	original = printf("%1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage >\n%2c0\n", 42);
	original = printf("%2c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -0\n%-0c0\n", 42);
	original = printf("%-0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -1\n%-1c0\n", 42);
	original = printf("%-1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage ->\n%-2c0\n", 42);
	original = printf("%-2c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *0\n%*c0\n", 0, 42);
	original = printf("%*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *1\n%*c0\n", 1, 42);
	original = printf("%*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *>\n%*c0\n", 2, 42);
	original = printf("%*c0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-0\n%*c0\n", -0, 42);
	original = printf("%*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-1\n%*c0\n", -1, 42);
	original = printf("%*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *->\n%*c0\n", -2, 42);
	original = printf("%*c0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*0\n%-*c0\n", 0, 42);
	original = printf("%-*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*1\n%-*c0\n", 1, 42);
	original = printf("%-*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*>\n%-*c0\n", 2, 42);
	original = printf("%-*c0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*c0\n", -0, 42);
	original = printf("%-*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-1\n%-*c0\n", -1, 42);
	original = printf("%-*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*->\n%-*c0\n", -2, 42);
	original = printf("%-*c0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision 0\n%.0c0\n", 42);
	original = printf("%.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision <\n%.1c0\n", 42);
	original = printf("%.1c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision =\n%.11c0\n", 42);
	original = printf("%.11c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision >\n%.20c0\n", 42);
	original = printf("%.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *0\n%.*c0\n", 0, 42);
	original = printf("%.*c0\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *<\n%.*c0\n", 1, 42);
	original = printf("%.*c0\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *=\n%.*c0\n", 11, 42);
	original = printf("%.*c0\n\n", 11, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *>\n%.*c0\n", 20, 42);
	original = printf("%.*c0\n\n", 20, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0c0\n", 42);
	original = printf("%0.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1c0\n", 42);
	original = printf("%0.1c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11c0\n", 42);
	original = printf("%0.11c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20c0\n", 42);
	original = printf("%0.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <.0\n%1.0c0\n", 42);
	original = printf("%1.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =.0\n%11.0c0\n", 42);
	original = printf("%11.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >.0\n%20.0c0\n", 42);
	original = printf("%20.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0c0\n", 42);
	original = printf("%-0.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0c0\n", 42);
	original = printf("%-1.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0c0\n", 42);
	original = printf("%-11.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0c0\n", 42);
	original = printf("%-20.0c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<<\n%1.2c0\n", 42);
	original = printf("%1.2c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <><\n%2.1c0\n", 42);
	original = printf("%2.1c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<=\n%5.11c0\n", 42);
	original = printf("%5.11c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =><\n%11.5c0\n", 42);
	original = printf("%11.5c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<>\n%5.20c0\n", 42);
	original = printf("%5.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >><\n%20.5c0\n", 42);
	original = printf("%20.5c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =<>\n%11.20c0\n", 42);
	original = printf("%11.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>=\n%20.11c0\n", 42);
	original = printf("%20.11c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ><>\n%15.20c0\n", 42);
	original = printf("%15.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>>\n%20.15c0\n", 42);
	original = printf("%20.15c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2c0\n", 42);
	original = printf("%-1.2c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1c0\n", 42);
	original = printf("%-2.1c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11c0\n", 42);
	original = printf("%-5.11c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5c0\n", 42);
	original = printf("%-11.5c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20c0\n", 42);
	original = printf("%-5.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5c0\n", 42);
	original = printf("%-20.5c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20c0\n", 42);
	original = printf("%-11.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11c0\n", 42);
	original = printf("%-20.11c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20c0\n", 42);
	original = printf("%-15.20c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15c0\n", 42);
	original = printf("%-20.15c0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	delay();


	printf("\t\tTests sur les chaines :\n\n");
	delay();
	
	homemade = ft_printf("s + NULL\n\n%s\n", NULL);
	original = printf("%s\n\n", NULL);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("empty string\n%s0\n", "");
	original = printf("%s0\n\n", "");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("%s\n", "test string");
	original = printf("%s\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage 0\n%0s0\n", "test string");
	original = printf("%0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage <\n%1s0\n", "test string");
	original = printf("%1s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage =\n%11s0\n", "test string");
	original = printf("%11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage >\n%20s0\n", "test string");
	original = printf("%20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -0\n%-0s0\n", "test string");
	original = printf("%-0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -<\n%-1s0\n", "test string");
	original = printf("%-1s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -=\n%-11s0\n", "test string");
	original = printf("%-11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage ->\n%-20s0\n", "test string");
	original = printf("%-20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *0\n%*s0\n", 0, "test string");
	original = printf("%*s0\n\n", 0, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-0\n%*s0\n", -0, "test string");
	original = printf("%*s0\n\n", -0, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*0\n%-*s0\n", 0, "test string");
	original = printf("%-*s0\n\n", 0, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*s0\n", -0, "test string");
	original = printf("%-*s0\n\n", -0, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *<\n%*s0\n", 1, "test string");
	original = printf("%*s0\n\n", 1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *=\n%*s0\n", 11, "test string");
	original = printf("%*s0\n\n", 11, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *>\n%*s0\n", 20, "test string");
	original = printf("%*s0\n\n", 20, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-<\n%*s0\n", -1, "test string");
	original = printf("%*s0\n\n", -1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*<\n%-*s0\n", 1, "test string");
	original = printf("%-*s0\n\n", 1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-<\n%-*s0\n", -1, "test string");
	original = printf("%-*s0\n\n", -1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-=\n%*s0\n", -1, "test string");
	original = printf("%*s0\n\n", -1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*=\n%-*s0\n", 11, "test string");
	original = printf("%-*s0\n\n", 11, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-=\n%-*s0\n", -11, "test string");
	original = printf("%-*s0\n\n", -11, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *->\n%*s0\n", -20, "test string");
	original = printf("%*s0\n\n", -1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*>\n%-*s0\n", 20, "test string");
	original = printf("%-*s0\n\n", 1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*->\n%-*s0\n", -20, "test string");
	original = printf("%-*s0\n\n", -1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision 0\n%.0s0\n", "test string");
	original = printf("%.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision <\n%.1s0\n", "test string");
	original = printf("%.1s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision =\n%.11s0\n", "test string");
	original = printf("%.11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision >\n%.20s0\n", "test string");
	original = printf("%.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *0\n%.*s0\n", 0, "test string");
	original = printf("%.*s0\n\n", 0, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *<\n%.*s0\n", 1, "test string");
	original = printf("%.*s0\n\n", 1, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *=\n%.*s0\n", 11, "test string");
	original = printf("%.*s0\n\n", 11, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *>\n%.*s0\n", 20, "test string");
	original = printf("%.*s0\n\n", 20, "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0s0\n", "test string");
	original = printf("%0.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1s0\n", "test string");
	original = printf("%0.1s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11s0\n", "test string");
	original = printf("%0.11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20s0\n", "test string");
	original = printf("%0.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <.0\n%1.0s0\n", "test string");
	original = printf("%1.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =.0\n%11.0s0\n", "test string");
	original = printf("%11.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >.0\n%20.0s0\n", "test string");
	original = printf("%20.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0s0\n", "test string");
	original = printf("%-0.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0s0\n", "test string");
	original = printf("%-1.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0s0\n", "test string");
	original = printf("%-11.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0s0\n", "test string");
	original = printf("%-20.0s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<<\n%1.2s0\n", "test string");
	original = printf("%1.2s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <><\n%2.1s0\n", "test string");
	original = printf("%2.1s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<=\n%5.11s0\n", "test string");
	original = printf("%5.11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =><\n%11.5s0\n", "test string");
	original = printf("%11.5s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<>\n%5.20s0\n", "test string");
	original = printf("%5.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >><\n%20.5s0\n", "test string");
	original = printf("%20.5s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =<>\n%11.20s0\n", "test string");
	original = printf("%11.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>=\n%20.11s0\n", "test string");
	original = printf("%20.11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ><>\n%15.20s0\n", "test string");
	original = printf("%15.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>>\n%20.15s0\n", "test string");
	original = printf("%20.15s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2s0\n", "test string");
	original = printf("%-1.2s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1s0\n", "test string");
	original = printf("%-2.1s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11s0\n", "test string");
	original = printf("%-5.11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5s0\n", "test string");
	original = printf("%-11.5s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20s0\n", "test string");
	original = printf("%-5.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5s0\n", "test string");
	original = printf("%-20.5s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20s0\n", "test string");
	original = printf("%-11.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11s0\n", "test string");
	original = printf("%-20.11s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20s0\n", "test string");
	original = printf("%-15.20s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15s0\n", "test string");
	original = printf("%-20.15s0\n\n", "test string");
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	delay();


	printf("\t\tTests sur les pointeurs :\n\n");
	delay();

	homemade = ft_printf("Random value\n%p*\n", &i);
	original = printf("%p*\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("NULL\n%p*\n", NULL);
	original = printf("%p*\n\n", NULL);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("0\n%p*\n", 0);
	original = printf("%p*\n\n", 0);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("-\n%p*\n", -&i);
	original = printf("%p*\n\n", -&i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("Max ?\n%p*\n", 0xffffffffffff);
	original = printf("%p*\n\n", 0xffffffffffff);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage 0\n%0p0\n", &i);
	original = printf("%0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage <\n%1p0\n", &i);
	original = printf("%1p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage =\n%11p0\n", &i);
	original = printf("%11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage >\n%20p0\n", &i);
	original = printf("%20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -0\n%-0p0\n", &i);
	original = printf("%-0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -<\n%-1p0\n", &i);
	original = printf("%-1p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -=\n%-11p0\n", &i);
	original = printf("%-11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage ->\n%-20p0\n", &i);
	original = printf("%-20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *0\n%*p0\n", 0, &i);
	original = printf("%*p0\n\n", 0, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-0\n%*p0\n", -0, &i);
	original = printf("%*p0\n\n", -0, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*0\n%-*p0\n", 0, &i);
	original = printf("%-*p0\n\n", 0, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*p0\n", -0, &i);
	original = printf("%-*p0\n\n", -0, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *<\n%*p0\n", 1, &i);
	original = printf("%*p0\n\n", 1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *=\n%*p0\n", 11, &i);
	original = printf("%*p0\n\n", 11, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *>\n%*p0\n", 20, &i);
	original = printf("%*p0\n\n", 20, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-<\n%*p0\n", -1, &i);
	original = printf("%*p0\n\n", -1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*<\n%-*p0\n", 1, &i);
	original = printf("%-*p0\n\n", 1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-<\n%-*p0\n", -1, &i);
	original = printf("%-*p0\n\n", -1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-=\n%*p0\n", -1, &i);
	original = printf("%*p0\n\n", -1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*=\n%-*p0\n", 11, &i);
	original = printf("%-*p0\n\n", 11, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-=\n%-*p0\n", -11, &i);
	original = printf("%-*p0\n\n", -11, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *->\n%*p0\n", -20, &i);
	original = printf("%*p0\n\n", -1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*>\n%-*p0\n", 20, &i);
	original = printf("%-*p0\n\n", 1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*->\n%-*p0\n", -20, &i);
	original = printf("%-*p0\n\n", -1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision 0\n%.0p0\n", &i);
	original = printf("%.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision <\n%.1p0\n", &i);
	original = printf("%.1p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision =\n%.11p0\n", &i);
	original = printf("%.11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision >\n%.20p0\n", &i);
	original = printf("%.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *0\n%.*p0\n", 0, &i);
	original = printf("%.*p0\n\n", 0, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *<\n%.*p0\n", 1, &i);
	original = printf("%.*p0\n\n", 1, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *=\n%.*p0\n", 11, &i);
	original = printf("%.*p0\n\n", 11, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *>\n%.*p0\n", 20, &i);
	original = printf("%.*p0\n\n", 20, &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0p0\n", &i);
	original = printf("%0.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1p0\n", &i);
	original = printf("%0.1p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11p0\n", &i);
	original = printf("%0.11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20p0\n", &i);
	original = printf("%0.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <.0\n%1.0p0\n", &i);
	original = printf("%1.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =.0\n%11.0p0\n", &i);
	original = printf("%11.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >.0\n%20.0p0\n", &i);
	original = printf("%20.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0p0\n", &i);
	original = printf("%-0.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0p0\n", &i);
	original = printf("%-1.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0p0\n", &i);
	original = printf("%-11.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0p0\n", &i);
	original = printf("%-20.0p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<<\n%1.2p0\n", &i);
	original = printf("%1.2p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <><\n%2.1p0\n", &i);
	original = printf("%2.1p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<=\n%5.11p0\n", &i);
	original = printf("%5.11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =><\n%11.5p0\n", &i);
	original = printf("%11.5p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<>\n%5.20p0\n", &i);
	original = printf("%5.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >><\n%20.5p0\n", &i);
	original = printf("%20.5p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =<>\n%11.20p0\n", &i);
	original = printf("%11.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>=\n%20.11p0\n", &i);
	original = printf("%20.11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ><>\n%15.20p0\n", &i);
	original = printf("%15.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>>\n%20.15p0\n", &i);
	original = printf("%20.15p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2p0\n", &i);
	original = printf("%-1.2p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1p0\n", &i);
	original = printf("%-2.1p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11p0\n", &i);
	original = printf("%-5.11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5p0\n", &i);
	original = printf("%-11.5p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20p0\n", &i);
	original = printf("%-5.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5p0\n", &i);
	original = printf("%-20.5p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20p0\n", &i);
	original = printf("%-11.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11p0\n", &i);
	original = printf("%-20.11p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20p0\n", &i);
	original = printf("%-15.20p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15p0\n", &i);
	original = printf("%-20.15p0\n\n", &i);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	delay();


	printf("\t\tTests sur les entiers (d & i) :\n\n");
	delay();

	homemade = ft_printf("%d %d %d %d %d\n", -2147483648, -1, 0, 1, 2147483647);
	original = printf("%d %d %d %d %d\n", -2147483648, -1, 0, 1, 2147483647);
	delay();
	if(homemade - original)
		printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	homemade = ft_printf("%i %i %i %i %i\n", -2147483648, -1, 0, 1, 2147483647);
	original = printf("%i %i %i %i %i\n", -2147483648, -1, 0, 1, 2147483647);
	delay();
	if(homemade - original)
		printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage 0\n%0d0\n", 42);
	original = printf("%0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage <\n%1d0\n", 42);
	original = printf("%1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage =\n%2d0\n", 42);
	original = printf("%2d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage >\n%3d0\n", 42);
	original = printf("%2d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -0\n%-0d0\n", 42);
	original = printf("%-0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -1\n%-1d0\n", 42);
	original = printf("%-1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage ->\n%-2d0\n", 42);
	original = printf("%-2d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *0\n%*d0\n", 0, 42);
	original = printf("%*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *1\n%*d0\n", 1, 42);
	original = printf("%*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *>\n%*d0\n", 2, 42);
	original = printf("%*d0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-0\n%*d0\n", -0, 42);
	original = printf("%*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-1\n%*d0\n", -1, 42);
	original = printf("%*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *->\n%*d0\n", -2, 42);
	original = printf("%*d0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*0\n%-*d0\n", 0, 42);
	original = printf("%-*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*1\n%-*d0\n", 1, 42);
	original = printf("%-*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*>\n%-*d0\n", 2, 42);
	original = printf("%-*d0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*d0\n", -0, 42);
	original = printf("%-*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-1\n%-*d0\n", -1, 42);
	original = printf("%-*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*->\n%-*d0\n", -2, 42);
	original = printf("%-*d0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision 0\n%.0d0\n", 42);
	original = printf("%.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision <\n%.1d0\n", 42);
	original = printf("%.1d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision =\n%.11d0\n", 42);
	original = printf("%.11d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision >\n%.20d0\n", 42);
	original = printf("%.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *0\n%.*d0\n", 0, 42);
	original = printf("%.*d0\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *<\n%.*d0\n", 1, 42);
	original = printf("%.*d0\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *=\n%.*d0\n", 11, 42);
	original = printf("%.*d0\n\n", 11, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *>\n%.*d0\n", 20, 42);
	original = printf("%.*d0\n\n", 20, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0d0\n", 42);
	original = printf("%0.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1d0\n", 42);
	original = printf("%0.1d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11d0\n", 42);
	original = printf("%0.11d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20d0\n", 42);
	original = printf("%0.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <.0\n%1.0d0\n", 42);
	original = printf("%1.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =.0\n%11.0d0\n", 42);
	original = printf("%11.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >.0\n%20.0d0\n", 42);
	original = printf("%20.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0d0\n", 42);
	original = printf("%-0.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0d0\n", 42);
	original = printf("%-1.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0d0\n", 42);
	original = printf("%-11.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0d0\n", 42);
	original = printf("%-20.0d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<<\n%1.2d0\n", 42);
	original = printf("%1.2d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <><\n%2.1d0\n", 42);
	original = printf("%2.1d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<=\n%5.11d0\n", 42);
	original = printf("%5.11d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =><\n%11.5d0\n", 42);
	original = printf("%11.5d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<>\n%5.20d0\n", 42);
	original = printf("%5.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >><\n%20.5d0\n", 42);
	original = printf("%20.5d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =<>\n%11.20d0\n", 42);
	original = printf("%11.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>=\n%20.11d0\n", 42);
	original = printf("%20.11d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ><>\n%15.20d0\n", 42);
	original = printf("%15.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>>\n%20.15d0\n", 42);
	original = printf("%20.15d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2d0\n", 42);
	original = printf("%-1.2d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1d0\n", 42);
	original = printf("%-2.1d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11d0\n", 42);
	original = printf("%-5.11d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5d0\n", 42);
	original = printf("%-11.5d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20d0\n", 42);
	original = printf("%-5.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5d0\n", 42);
	original = printf("%-20.5d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20d0\n", 42);
	original = printf("%-11.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11d0\n", 42);
	original = printf("%-20.11d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20d0\n", 42);
	original = printf("%-15.20d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15d0\n", 42);
	original = printf("%-20.15d0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	delay();


	printf("\t\tTests sur les non signés (u) :\n\n");
	delay();

	homemade = ft_printf("%u %u %u %u %u\n", -2147483648, -1, 0, 1, 2147483647);
	original = printf("%u %u %u %u %u\n", -2147483648, -1, 0, 1, 2147483647);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage 0\n%0u0\n", 42);
	original = printf("%0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage <\n%1u0\n", 42);
	original = printf("%1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage =\n%2u0\n", 42);
	original = printf("%2u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage >\n%3u0\n", 42);
	original = printf("%2u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -0\n%-0u0\n", 42);
	original = printf("%-0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -1\n%-1u0\n", 42);
	original = printf("%-1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage ->\n%-2u0\n", 42);
	original = printf("%-2u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *0\n%*u0\n", 0, 42);
	original = printf("%*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *1\n%*u0\n", 1, 42);
	original = printf("%*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *>\n%*u0\n", 2, 42);
	original = printf("%*u0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-0\n%*u0\n", -0, 42);
	original = printf("%*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-1\n%*u0\n", -1, 42);
	original = printf("%*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *->\n%*u0\n", -2, 42);
	original = printf("%*u0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*0\n%-*u0\n", 0, 42);
	original = printf("%-*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*1\n%-*u0\n", 1, 42);
	original = printf("%-*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*>\n%-*u0\n", 2, 42);
	original = printf("%-*u0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*u0\n", -0, 42);
	original = printf("%-*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-1\n%-*u0\n", -1, 42);
	original = printf("%-*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*->\n%-*u0\n", -2, 42);
	original = printf("%-*u0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision 0\n%.0u0\n", 42);
	original = printf("%.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision <\n%.1u0\n", 42);
	original = printf("%.1u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision =\n%.11u0\n", 42);
	original = printf("%.11u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision >\n%.20u0\n", 42);
	original = printf("%.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *0\n%.*u0\n", 0, 42);
	original = printf("%.*u0\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *<\n%.*u0\n", 1, 42);
	original = printf("%.*u0\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *=\n%.*u0\n", 11, 42);
	original = printf("%.*u0\n\n", 11, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *>\n%.*u0\n", 20, 42);
	original = printf("%.*u0\n\n", 20, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0u0\n", 42);
	original = printf("%0.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1u0\n", 42);
	original = printf("%0.1u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11u0\n", 42);
	original = printf("%0.11u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20u0\n", 42);
	original = printf("%0.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <.0\n%1.0u0\n", 42);
	original = printf("%1.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =.0\n%11.0u0\n", 42);
	original = printf("%11.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >.0\n%20.0u0\n", 42);
	original = printf("%20.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0u0\n", 42);
	original = printf("%-0.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0u0\n", 42);
	original = printf("%-1.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0u0\n", 42);
	original = printf("%-11.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0u0\n", 42);
	original = printf("%-20.0u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<<\n%1.2u0\n", 42);
	original = printf("%1.2u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <><\n%2.1u0\n", 42);
	original = printf("%2.1u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<=\n%5.11u0\n", 42);
	original = printf("%5.11u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =><\n%11.5u0\n", 42);
	original = printf("%11.5u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<>\n%5.20u0\n", 42);
	original = printf("%5.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >><\n%20.5u0\n", 42);
	original = printf("%20.5u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =<>\n%11.20u0\n", 42);
	original = printf("%11.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>=\n%20.11u0\n", 42);
	original = printf("%20.11u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ><>\n%15.20u0\n", 42);
	original = printf("%15.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>>\n%20.15u0\n", 42);
	original = printf("%20.15u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2u0\n", 42);
	original = printf("%-1.2u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1u0\n", 42);
	original = printf("%-2.1u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11u0\n", 42);
	original = printf("%-5.11u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5u0\n", 42);
	original = printf("%-11.5u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20u0\n", 42);
	original = printf("%-5.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5u0\n", 42);
	original = printf("%-20.5u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20u0\n", 42);
	original = printf("%-11.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11u0\n", 42);
	original = printf("%-20.11u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20u0\n", 42);
	original = printf("%-15.20u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15u0\n", 42);
	original = printf("%-20.15u0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	delay();

	printf("\t\tTests sur les hexa (x & X) :\n\n");
	delay();
	
	homemade = ft_printf("%x %x %x %x %x\n", -2147483647, -1, 0, 1, 2147483647);
	original = printf("%x %x %x %x %x\n", -2147483647, -1, 0, 1, 2147483647);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	homemade = ft_printf("%X %X %X %X %X\n", -2147483647, -1, 0, 1, 2147483647);
	original = printf("%X %X %X %X %X\n", -2147483647, -1, 0, 1, 2147483647);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	homemade = ft_printf("remplissage 0\n%0x0\n", 42);
	original = printf("%0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage <\n%1x0\n", 42);
	original = printf("%1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage =\n%2x0\n", 42);
	original = printf("%2x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage >\n%3x0\n", 42);
	original = printf("%2x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -0\n%-0x0\n", 42);
	original = printf("%-0c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -1\n%-1x0\n", 42);
	original = printf("%-1c\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage ->\n%-2x0\n", 42);
	original = printf("%-2x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *0\n%*x0\n", 0, 42);
	original = printf("%*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *1\n%*x0\n", 1, 42);
	original = printf("%*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *>\n%*x0\n", 2, 42);
	original = printf("%*x0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-0\n%*x0\n", -0, 42);
	original = printf("%*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *-1\n%*x0\n", -1, 42);
	original = printf("%*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage *->\n%*x0\n", -2, 42);
	original = printf("%*x0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*0\n%-*x0\n", 0, 42);
	original = printf("%-*c\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*1\n%-*x0\n", 1, 42);
	original = printf("%-*c\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*>\n%-*x0\n", 2, 42);
	original = printf("%-*x0\n\n", 2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-0\n%-*x0\n", -0, 42);
	original = printf("%-*c\n\n", -0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*-1\n%-*x0\n", -1, 42);
	original = printf("%-*c\n\n", -1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("remplissage -*->\n%-*x0\n", -2, 42);
	original = printf("%-*x0\n\n", -2, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision 0\n%.0x0\n", 42);
	original = printf("%.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision <\n%.1x0\n", 42);
	original = printf("%.1x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision =\n%.11x0\n", 42);
	original = printf("%.11x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision >\n%.20x0\n", 42);
	original = printf("%.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *0\n%.*x0\n", 0, 42);
	original = printf("%.*x0\n\n", 0, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *<\n%.*x0\n", 1, 42);
	original = printf("%.*x0\n\n", 1, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *=\n%.*x0\n", 11, 42);
	original = printf("%.*x0\n\n", 11, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("precision *>\n%.*x0\n", 20, 42);
	original = printf("%.*x0\n\n", 20, 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.0\n%0.0x0\n", 42);
	original = printf("%0.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.<\n%0.1x0\n", 42);
	original = printf("%0.1x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.=\n%0.11x0\n", 42);
	original = printf("%0.11x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R 0.>\n%0.20x0\n", 42);
	original = printf("%0.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <.0\n%1.0x0\n", 42);
	original = printf("%1.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =.0\n%11.0x0\n", 42);
	original = printf("%11.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >.0\n%20.0x0\n", 42);
	original = printf("%20.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -0.0\n%-0.0x0\n", 42);
	original = printf("%-0.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<.0\n%-1.0x0\n", 42);
	original = printf("%-1.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=.0\n%-11.0x0\n", 42);
	original = printf("%-11.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->.0\n%-20.0x0\n", 42);
	original = printf("%-20.0x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<<\n%1.2x0\n", 42);
	original = printf("%1.2x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <><\n%2.1x0\n", 42);
	original = printf("%2.1x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<=\n%5.11x0\n", 42);
	original = printf("%5.11x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =><\n%11.5x0\n", 42);
	original = printf("%11.5x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R <<>\n%5.20x0\n", 42);
	original = printf("%5.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >><\n%20.5x0\n", 42);
	original = printf("%20.5x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R =<>\n%11.20x0\n", 42);
	original = printf("%11.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>=\n%20.11x0\n", 42);
	original = printf("%20.11x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ><>\n%15.20x0\n", 42);
	original = printf("%15.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R >>>\n%20.15x0\n", 42);
	original = printf("%20.15x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<<\n%-1.2x0\n", 42);
	original = printf("%-1.2x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<><\n%-2.1x0\n", 42);
	original = printf("%-2.1x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<=\n%-5.11x0\n", 42);
	original = printf("%-5.11x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=><\n%-11.5x0\n", 42);
	original = printf("%-11.5x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -<<>\n%-5.20x0\n", 42);
	original = printf("%-5.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->><\n%-20.5x0\n", 42);
	original = printf("%-20.5x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -=<>\n%-11.20x0\n", 42);
	original = printf("%-11.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>=\n%-20.11x0\n", 42);
	original = printf("%-20.11x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R -><>\n%-15.20x0\n", 42);
	original = printf("%-15.20x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
	homemade = ft_printf("P+R ->>>\n%-20.15x0\n", 42);
	original = printf("%-20.15x0\n\n", 42);
	delay();
	if(homemade - original)
			printf("\n/!\\\treturn value is false\t/!\\\nexpected: %d, obtained: %d\n\n", original, homemade);
	delay();
}