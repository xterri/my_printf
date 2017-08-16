/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_flag_f.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 14:33:41 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 16:30:01 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag_f(t_print **list, char *str, double val)
{
	MIN && (NEG || f_exists(list, ' ') || f_exists(list, '+')) ? MIN-- : 0;
	PNB && MIN ? MIN-- : 0;
	!f_exists(list, '-') && !f_exists(list, '0') && MIN ?
		put_wflags(list, MIN) : 0;
	val = !NEG ? put_plus(list, val) : 0;
	f_exists(list, ' ') || f_exists(list, '+') ? LEN++ : 0;
	NEG ? LEN += write(1, "-", 1) : 0;
	!f_exists(list, '-') && f_exists(list, '0') && MIN ?
		put_wflags(list, MIN) : 0;
	LEN += write(1, str, ft_strlen(str));
	f_exists(list, '-') && MIN ? put_wflags(list, MIN) : 0;
}
