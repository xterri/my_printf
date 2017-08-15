/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:19:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 11:35:25 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		u_output(t_print **list)
{
	char	*uint;
	ssize_t	len;

	if (LF && F == 'u' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		uint = ONLY_H ? ITOA(USHORT, U_STR, 10) : ITOA(UCHAR, U_STR, 10);
	else if (LF && ft_strcmp(LO, "h") && ft_strcmp(LO, "hh"))
		uint = ITOA(VAL_UINT, U_STR, 10);
	else
		uint = F == 'U' ? ITOA(ULONG, U_STR, 10) : ITOA(UINT, U_STR, 10);
	len = ft_strlen(uint);
	if (len == 1 && !ft_strcmp(uint, "0") && P && !PNB)
		free_str(&uint);
	P ? prec_calc(list, len) : 0;
	!PNB && MIN && f_exists(list, '#') ? MIN-- : 0;
	uint && f_exists(list, '-') ? minus_flag_uox(list, uint, len, 'u') : 0;
	if (MIN & !P)
	{
		MIN = MIN <= len ? 0 : MIN;
		MIN > len ? MIN -= len : 0;
	}
	MIN ? put_wflags(list, MIN) : 0;
	uint && !f_exists(list, '-') ? minus_flag_uox(list, uint, len, 'u') : 0;
	uint ? free(uint) : 0;
	return (1);
}
