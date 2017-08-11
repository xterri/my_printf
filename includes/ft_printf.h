/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 15:04:08 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/10 23:22:35 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "libft.h"
# include <stdio.h>
# include <stdarg.h>

#define WF (*list)->wflags
#define WO (*list)->wopts
#define P (*list)->prec
#define F (*list)->format
#define LF (*list)->lflags
#define LO (*list)->lopt
#define MIN (*list)->min_w
#define PNB (*list)->p_nb
#define LEN (*list)->pf_len

#define VAL_INT (*list)->val.val_int
#define VAL_UINT (*list)->val.val_uint
#define VAL_WC (*list)->val.wide_c
#define VAL_WS (*list)->val.wide_s
#define VAL_STR (*list)->val.str
#define VAL_ADDR (*list)->val.addr

typedef union			s_param
{
	intmax_t			val_int;
	uintmax_t			val_uint;
	char				*str;
	void				*addr;
	wchar_t				*wide_s;
	wchar_t				wide_c;
}						t_param;
	
typedef struct			s_print
{
	int					wflags;
	int					wopts[5];
	int					prec;
	int					format;
	int					lflags;
	char				lopt[9];
	size_t				min_w;
	size_t				p_nb;
	size_t				pf_len;
	t_param				val;
	// struct s_print	next; <-- for getting param (n$)
	// struct s_print	prev; <-- for getting param (n$)
}						t_print;
/* FT_PRINTF */
int					ft_printf(const char *format, ...);

/* PARSING FLAGS FROM FORMAT STRING */
char				*parse_out(char **str, t_print *list, va_list ap);
void				parse_flags(t_print **list, char **s);
int					get_nbr(size_t *store, char **str, int index);
int					get_wflags(t_print **list, char **s, int index);
void				get_values(t_print **list, va_list ap);

/* CHECK FORMATS AND FLAGS */
int					check_format(t_print **list);
// may need to remove check_valid, since printf can/will still print out
// the str even if there are invalidities?
int					check_valid(t_print **list, char c);
int					f_exists(t_print **list, char c);

/* FUNCTIONS FOR CONVERTING / RESETTING TO LEN MODIFIERS */
void				reset_lflags(t_print **list);

/* FUNCTIONS FOR PRECISION */
void				replace(int *flags, char find, char replace);
void				prec_calc(t_print **list, size_t digits);
void				prec_fill(t_print **list, size_t n);
void				reset_prec(t_print **list);

/* FUNCTIONS FOR WFLAGS */
intmax_t			put_plus(t_print **list, intmax_t val);
void				put_wflags(t_print **list, size_t min);
void				reset_wflags(t_print **list);

/* GENERAL / HELPER FUNCTIONS */
char				*pf_itoa_base(uintmax_t val, char *key, int base);

/* GET & DISPLAY CORRECT OUTPUT */
int					get_output(t_print **list);
int					di_output(t_print **list);
int					c_output(t_print **list);
int					pt_output(t_print **list);
int					s_output(t_print **list);
int					p_output(t_print **list);
int					o_output(t_print **list);
int					u_output(t_print **list);
int					x_output(t_print **list);

/*
int					C_output(t_print **list);
int					S_output(t_print **list);
*/

#endif
