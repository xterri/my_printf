/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_flag_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:06:58 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/12 21:02:57 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag_di(t_print **list, intmax_t val)
{
	!f_exists(list, '-') && !f_exists(list, '0') && MIN ?
		put_wflags(list, MIN) : 0;
	val = put_plus(list, val);
	NEG ? write(1, "-", 1) : 0;
	!f_exists(list, '-') && f_exists(list, '0') && MIN ?
		put_wflags(list, MIN) : 0;
	PNB ? prec_fill(list, PNB) : 0;
	if (val == (intmax_t)-0x8000000000000000)
		ft_putstr("-9223372036854775808");
	else
	{
		!val && P && !PNB ? 0 : ft_putnbr(val);
		!val && P && !PNB ? LEN-- : 0;
	}
	f_exists(list, '-') && MIN ? put_wflags(list, MIN) : 0;
}
