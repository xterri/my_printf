/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:35:52 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 16:30:30 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		di_output(t_print **list)
{
	ssize_t		digits;
	intmax_t	val;

	if (LF && F != 'D' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		val = ONLY_H ? (short)VAL_INT : (signed char)VAL_INT;
	else if (F == 'D' || (LF && !ft_strncmp(LO, "l", 1) && ft_strcmp(LO, "ll")))
		val = (long)VAL_INT;
	else
		val = !LF ? (int)VAL_INT : VAL_INT;
	digits = ft_digits(val);
	val >= 0 && (f_exists(list, '+') || f_exists(list, ' ')) ? digits++ : 0;
	LEN += digits;
	P && (val < 0 || (val >= 0 && (f_exists(list, '+') || f_exists(list, ' '))))
		? PNB++ : 0;
	PNB ? prec_calc(list, digits) : 0;
	if (MIN && !val && !P)
		f_exists(list, '+') || f_exists(list, ' ') ? MIN -= 2 : MIN--;
	WF == 2 && val >= 0 ? val = put_plus(list, val) : 0;
	if (MIN && val && !P)
	{
		MIN = MIN <= digits ? 0 : MIN;
		MIN > digits ? MIN -= digits : 0;
	}
	minus_flag_di(list, val);
	return (1);
}
