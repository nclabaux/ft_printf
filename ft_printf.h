/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:32:31 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/11 15:32:35 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# include "libft/ft_convert_base/ft_convert_base.h"

typedef struct	s_flag
{
	int	padding;
	int	prec;
	int	position;
	int	modified;
}				t_flag;

int				ft_printf(const char *str, ...);
int				flag_reader(va_list *aap, const char *str, int i);
int				arg_reader(va_list *aap, const char *str, int i, t_flag *afl);
void			flag_init(t_flag *afl);
void			prec_read(va_list *aap, t_flag *afl, int *ai, const char *str);

int				character(va_list *aap, int i, t_flag *afl, int *g_res);
int				string(va_list *aap, int i, t_flag *afl, int *g_res);
void			ft_null(int *g_res);
int				pointeur(va_list *aap, int i, t_flag *afl, int *g_res);
int				integer(va_list *aap, int i, t_flag *afl, int *g_res);
int				unsigned_integer(va_list *aap, int i, t_flag *afl, int *g_res);
int				min_hexa(va_list *aap, int i, t_flag *afl, int *g_res);
int				max_hexa(va_list *aap, int i, t_flag *afl, int *g_res);

int				digit_nbr(int x);
int				digit_nbr_hex(long long x);
void			ft_putstr_nb_fd(char *str, int size, int fd);
int				ft_min(int x, int y);
int				ft_max(int x, int y);

void			ft_putspace(int *g_res);
void			ft_putzero(int *g_res);

#endif
