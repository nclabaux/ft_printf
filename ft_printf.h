/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:49:56 by nclabaux          #+#    #+#             */
/*   Updated: 2019/12/10 16:11:03 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft/libft.h"
#include "libft/ft_convert_base/ft_convert_base.h"

typedef struct	s_flag
{
	int	padding;
	int	precision;
	int	position;
	int	modified;
}				t_flag;

int		ft_printf(const char *, ...);
int		flag_reader(va_list *aap, const char *str, int i);
int		arg_reader(va_list *aap, const char *str, int i, t_flag *aflags);
void	flag_init(t_flag *flags);

int		character(va_list *aap, int i, t_flag *aflags);
int		string(va_list *aap, int i, t_flag *aflags);
int		pointeur(va_list *aap, int i, t_flag *aflags);
int		integer(va_list *aap, int i, t_flag *aflags);
int		unsigned_integer(va_list *aap, int i, t_flag *aflags);
int		min_hexa(va_list *aap, int i, t_flag *aflags);
int		max_hexa(va_list *aap, int i, t_flag *aflags);

int		digit_number(int x);
void	ft_putstr_nb_fd(char *str, int size, int fd);

#endif
