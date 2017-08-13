/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:19:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 11:35:06 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		u_output(t_print **list)
{
	char	*uint;
	ssize_t	len;

	if (LF && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		uint = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base(VAL_UINT, "0123456789", 10) :
			pf_itoa_base((unsigned char)VAL_UINT, "0123456789", 10);
	else if (LF && ft_strcmp(LO, "h") && ft_strcmp(LO, "hh"))
		uint = pf_itoa_base(VAL_UINT, "0123456789", 10);
	else
		uint = F == 'U' ?
			pf_itoa_base((unsigned long)VAL_UINT, "0123456789", 10) :
			pf_itoa_base((unsigned int)VAL_UINT, "0123456789", 10);
	len = ft_strlen(uint);
	P ? prec_calc(list, len) : 0;
	!PNB && MIN && f_exists(list, '#') ? MIN-- : 0;
	if (f_exists(list, '-'))
		minus_flag_uox(list, uint, len, 'u');
	if (MIN)
	{
		MIN = !PNB && MIN <= len ? 0 : MIN;
		!PNB && MIN > len ? MIN -= len : 0;
	}
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
		minus_flag_uox(list, uint, len, 'u');
	free(uint);
	return (1);
}
