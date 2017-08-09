/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   di_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:35:52 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/08 09:52:14 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		di_output(t_print **list)
{
	size_t digits;
	intmax_t val;

	if (!(check_valid(list, 'd')))
		return (-1);
	val = (*list)->val.cdi;
	//val = LF ? convert_ilen(LO, (*list)->val.cdi) : (*list)->val.cdi;
	digits = ft_digits(val);
	val >= 0 && (f_exists(list, '+') || f_exists(list, ' ')) ? digits++ : 0;
	LEN += digits;
	P && (val < 0 || (val >= 0 && (f_exists(list, '+') || f_exists(list, ' '))))
		? PNB++ : 0;
	P ? prec_calc(list, digits) : 0;
	if (f_exists(list, '-'))
	{
		val = put_plus(list, val);
		P ? prec_fill(list) : 0;
		ft_putnbr(val);
	}
	else if ((WF == 2 || P) && val >= 0)
		val = put_plus(list, val);
	if (MIN)
	{
		MIN = !P && MIN < digits ? 0 : MIN;
		//LEN -= !P && MIN < digits ? 0 : 1;
		!P && MIN > digits ? MIN -= digits : 0;
		MIN ? put_wflags(list, MIN) : 0;
	}
	if (!f_exists(list, '-'))
	{
		WF == 1 ? val = put_plus(list, val) : 0;
		P ? prec_fill(list) : 0;
		ft_putnbr(val);
	}
	return (1);
}
