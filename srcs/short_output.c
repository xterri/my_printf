/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short_output.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 20:36:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 23:49:44 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	short_output(t_print **list)
{
	size_t	digits;
	short	val;

	val = (short)VAL_INT;
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
	else if (WF == 2 && val >= 0)
		val = put_plus(list, val);
	if (MIN)
	{
		MIN = !P && MIN <= digits ? 0 : MIN;
		!P && MIN > digits ? MIN -= digits : 0;
		MIN ? put_wflags(list, MIN) : 0;
	}
	if (!f_exists(list, '-'))
	{
		val = put_plus(list, val);
		P ? prec_fill(list) : 0;
		ft_putnbr(val);
	}
}
