/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nclabaux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 15:32:31 by nclabaux          #+#    #+#             */
/*   Updated: 2020/01/21 17:50:25 by nclabaux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft/libft.h"
# include "libft/ft_convert_base/ft_convert_base.h"

typedef struct	s_flag
{
	int		plus;
	int		pad;
	int		prec;
	int		position;
	int		modified;
	char	filler;
}				t_flag;

int				ft_printf(const char *str, ...);
int				ft_flag_rd(va_list *aap, const char *str, int i);
int				ft_arg_rd(va_list *aap, const char *str, int i, t_flag *afl);
void			ft_flag_init(t_flag *afl);
int				ft_prec_rd(va_list *aap, t_flag *afl, int i, const char *str);

int				ft_character(va_list *aap, int i, t_flag *afl, int *g_res);
void			ft_padding_char(int *g_res, t_flag *afl);

int				ft_string(va_list *aap, int i, t_flag *afl, int *g_res);
void			ft_padding_str(int *g_res, t_flag *afl, int len);
void			ft_putstr_nb_cpt(char *s, int len, int *g_res);

int				ft_pointeur(va_list *aap, int i, t_flag *afl, int *g_res);
void			ft_padding_pnt(int *g_res, t_flag *afl, int x);
void			ft_precision_pnt(int *g_res, t_flag *afl, int x);

int				ft_integer(va_list *aap, int i, t_flag *afl, int *g_res);
void			ft_padding_int(int *g_res, t_flag *afl, int x, int n);
void			ft_precision_int(int *g_res, t_flag *afl, int x);

int				ft_unsigned_int(va_list *aap, int i, t_flag *afl, int *g_res);
void			ft_padding_ui(int *g_res, t_flag *afl, int len);
void			ft_precision_ui(int *g_res, t_flag *afl, int len);

int				ft_hexa(va_list *aap, int i, t_flag *afl, int *g_res, char *s);
void			ft_padding_hex(int *g_res, t_flag *afl, int x);
void			ft_precision_hex(int *g_res, t_flag *afl, int x);

int				ft_percent(int i, t_flag *afl, int *g_res);
void			ft_padding_pct(int *g_res, t_flag *afl);

int				ft_digit_nbr(int x);
int				ft_dgt_nbr_hex(long long x);
int				ft_min(int x, int y);
int				ft_max(int x, int y);

void			ft_putchar_cpt(char c, int *g_res);

#endif
