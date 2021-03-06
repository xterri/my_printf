/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:04:08 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/17 11:13:11 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdio.h>
# include <stdarg.h>

# define WF (*list)->wflags
# define WO (*list)->wopts
# define P (*list)->prec
# define NEG (*list)->neg
# define F (*list)->format
# define LF (*list)->lflags
# define LO (*list)->lopt
# define MIN (*list)->min_w
# define PNB (*list)->p_nb
# define LEN (*list)->pf_len
# define TMP (*list)->tmp
# define FLT (*list)->flt
# define VAL_NPTR (*list)->val.n_ptr
# define VAL_INT (*list)->val.val_int
# define VAL_UINT (*list)->val.val_uint
# define VAL_WC (*list)->val.wide_c
# define VAL_WS (*list)->val.wide_s
# define VAL_STR (*list)->val.str
# define VAL_DBL (*list)->val.dbl
# define VAL_ADDR (*list)->val.addr
# define F_LX F == 'x'
# define F_UX F == 'X'
# define UINT (unsigned int)VAL_UINT
# define USHORT (unsigned short)VAL_UINT
# define UCHAR (unsigned char)VAL_UINT
# define ULONG (unsigned long)VAL_UINT
# define ONLY_H !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh")
# define U_STR "0123456789"
# define O_STR "01234567"
# define HEX_LX "0123456789abcdef"
# define HEX_UX "0123456789ABCDEF"
# define ITOA(a, b, c) pf_itoa_base(a, b, c)

typedef union			u_param
{
	intmax_t			val_int;
	uintmax_t			val_uint;
	double				dbl;
	int					*n_ptr;
	char				*str;
	void				*addr;
	wchar_t				*wide_s;
	wchar_t				wide_c;
}						t_param;

typedef struct			s_print
{
	int					wflags;
	int					wopts[100];
	int					prec;
	int					neg;
	int					format;
	int					lflags;
	int					tmp;
	char				*flt;
	char				lopt[9];
	ssize_t				min_w;
	ssize_t				p_nb;
	ssize_t				pf_len;
	t_param				val;
}						t_print;

/*
** FT_PRINTF
*/
int						ft_printf(const char *format, ...);

/*
** PARSING FLAGS FROM FORMAT STRING
*/
char					*parse_out(char **str, t_print *list, va_list ap);
void					parse_flags(t_print **list, char **s);
int						get_nbr(ssize_t *store, char **str, int index);
int						get_wflags(t_print **list, char **s, int index);
void					get_star_value(t_print **list, char *str, va_list ap);
void					get_values(t_print **list, va_list ap);

/*
** CHECK FORMATS AND FLAGS
*/
int						check_format(t_print **list);
int						f_exists(t_print **list, char c);

/*
** FUNCTIONS FOR CONVERTING / RESETTING TO LEN MODIFIERS
*/
void					reset_lflags(t_print **list);

/*
** FUNCTIONS FOR PRECISION
*/
void					replace(int *flags, char find, char replace);
void					prec_calc(t_print **list, ssize_t digits);
void					prec_calc_s(t_print **list, ssize_t len);
void					prec_fill(t_print **list, size_t n);
void					reset_prec(t_print **list);

/*
** FUNCTIONS FOR WFLAGS
*/
intmax_t				put_plus(t_print **list, intmax_t val);
void					put_wflags(t_print **list, ssize_t min);
void					minus_flag_di(t_print **list, intmax_t val);
void					minus_flag_f(t_print **list, char *str, double val);
void					minus_flag_s(t_print **list, void *str, char format);
void					minus_flag_uox(t_print **list, char *str, ssize_t len,
						char format);
void					reset_wflags(t_print **list);

/*
** GENERAL / HELPER FUNCTIONS
*/
char					*pf_itoa_base(uintmax_t val, char *key, int base);
void					free_str(char **str);

/*
** HELPER FUNCTIONS FOR FLOATS
*/
double					get_round_nbr(ssize_t prec);

/*
** GET & DISPLAY CORRECT OUTPUT
*/
int						get_output(t_print **list);
int						di_output(t_print **list);
int						c_output(t_print **list);
int						pt_output(t_print **list);
int						s_output(t_print **list);
int						p_output(t_print **list);
int						o_output(t_print **list);
int						u_output(t_print **list);
int						x_output(t_print **list);
int						f_output(t_print **list);
int						ls_output(t_print **list);

#endif
