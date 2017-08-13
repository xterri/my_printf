/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   S_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:21:51 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 11:31:40 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		S_output(t_print **list);
{
	ssize_t	len;

	!VAL_WS ? VAL_WS = "(null)" : 0;
	len = ft_strlen(VAL_WS);
	if (!P && MIN < len && !LF)
		return (LEN += write(1, VAL_WS, len));
	P && PNB ? prec_calc_s(list, len) : 0;
	f_exists(list, '-') ? minus_flag_sS(list, VAL_WS, 'S') : 0;
	MIN ? put_wflags(list, MIN) : 0;
	!f_exists(list, '-') ? minus_flag_sS(list, VAL_WS, 'S') : 0;
	return (1);
}
