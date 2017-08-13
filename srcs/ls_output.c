/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:21:51 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 12:47:09 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ls_output(t_print **list)
{
	ssize_t	len;

	!VAL_WS ? VAL_WS = (wchar_t *)"(null)" : 0;
	len = 0;
	while (VAL_WS[len])
		len++;
	if (!P && MIN < len && !LF)
		return (LEN += write(1, VAL_WS, len));
	P && PNB ? prec_calc_s(list, len) : 0;
	f_exists(list, '-') ? minus_flag_s(list, VAL_WS, 'S') : 0;
	MIN ? put_wflags(list, MIN) : 0;
	!f_exists(list, '-') ? minus_flag_s(list, VAL_WS, 'S') : 0;
	return (1);
}
