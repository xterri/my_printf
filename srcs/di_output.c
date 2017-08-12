/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:35:52 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 19:03:40 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		di_output(t_print **list)
{
	ssize_t		digits;
	intmax_t	val;

	if (LF && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		val = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ? (short)VAL_INT :
			(signed char)VAL_INT;
	else if (LF && !ft_strncmp(LO, "l", 1) && ft_strcmp(LO, "ll"))
		val = (int)VAL_INT;
	else
		val = !LF ? (int)VAL_INT : VAL_INT;
	digits = ft_digits(val);
	val >= 0 && (f_exists(list, '+') || f_exists(list, ' ')) ? digits++ : 0;
	LEN += digits;
	P && (val < 0 || (val >= 0 && (f_exists(list, '+') || f_exists(list, ' '))))
		? PNB++ : 0;
	PNB ? prec_calc(list, digits) : 0;
	WF == 2 && val >= 0 ? val = put_plus(list, val) : 0;
	if (MIN && val)
	{
		MIN = !PNB && MIN <= digits ? 0 : MIN;
		!PNB && MIN > digits ? MIN -= digits : 0;
	}
	minus_flag_di(list, val);
	return (1);
}
