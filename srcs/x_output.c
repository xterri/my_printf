/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:41:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 11:35:47 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		x_output(t_print **list)
{
	char	*hex;
	ssize_t	len;

	if (LF && F_LX && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		hex = ONLY_H ? ITOA(USHORT, HEX_LX, 16) : ITOA(UCHAR, HEX_LX, 16);
	else if (LF && F_UX && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		hex = ONLY_H ? ITOA(USHORT, HEX_UX, 16) : ITOA(UCHAR, HEX_UX, 16);
	else if (LF && ft_strcmp(LO, "h") && ft_strcmp(LO, "hh"))
		hex = F_LX ? ITOA(VAL_UINT, HEX_LX, 16) : ITOA(VAL_UINT, HEX_UX, 16);
	else
		hex = F_LX ? ITOA(UINT, HEX_LX, 16) : ITOA(UINT, HEX_UX, 16);
	len = ft_strlen(hex);
	if (len == 1 && hex[0] == '0' && P && !PNB)
		free_str(&hex);
	MIN = MIN > 1 && f_exists(list, '#') ? MIN - 2 : MIN;
	P && hex ? prec_calc(list, len) : 0;
	if (!P && hex)
		MIN = MIN > len ? MIN - len : 0;
	hex ? minus_flag_uox(list, hex, len, 'x') : 0;
	!hex ? put_wflags(list, MIN) : 0;
	hex ? free(hex) : 0;
	return (1);
}
