/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:01:04 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/13 13:51:23 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_BASE_H
# define FT_CONVERT_BASE_H

# include <stdlib.h>

char	*cut(char *str, int *negative);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	*ft_nbr_base(unsigned long nbr, char *base);
char	*ft_nbr_base2(int *tab, int size, char *base);
int		ft_atoi_base(char *str, char *base, int *base_ok);
int		is_in_index(char c, char *base, int *index);
int		is_ok(char *base, int *base_size);
long	is_negative(long x, int *i);
void	ft_putchar(char c);

#endif
