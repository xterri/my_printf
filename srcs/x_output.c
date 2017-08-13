/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:41:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 11:34:44 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		x_output(t_print **list)
{
	char	*hex;
	ssize_t	len;

	if (LF && F == 'x' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		hex = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base((unsigned short)VAL_UINT, "0123456789abcdef", 16) :
			pf_itoa_base((unsigned char)VAL_UINT, "0123456789abcdef", 16);
	if (LF && F == 'X' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		hex = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base((unsigned short)VAL_UINT, "0123456789ABCDEF", 16) :
			pf_itoa_base((unsigned char)VAL_UINT, "0123456789ABCDEF", 16);
	else if (LF && ft_strcmp(LO, "h") && ft_strcmp(LO, "hh"))
		hex = F == 'x' ? pf_itoa_base(VAL_UINT, "0123456789abcdef", 16) :
			pf_itoa_base(VAL_UINT, "0123456789ABCDEF", 16);
	else
		hex = F == 'x' ?
			pf_itoa_base((unsigned int)VAL_UINT, "0123456789abcdef", 16) :
			pf_itoa_base((unsigned int)VAL_UINT, "0123456789ABCDEF", 16);
	len = ft_strlen(hex);
	if (len == 1 && hex[0] == '0' && P)
	{
		free(hex);
		hex = NULL;
	}
	MIN = MIN > 1 && f_exists(list, '#') ? MIN - 2 : MIN;
	P && hex ? prec_calc(list, len) : 0;
	if (!P && hex)
		MIN = MIN > len ? MIN - len : 0;
	hex ? minus_flag_uox(list, hex, len, 'x') : 0;
	!hex ? put_wflags(list, MIN) : 0;
	hex ? free(hex) : 0;
	return (1);
}
