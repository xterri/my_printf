/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:50:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 11:34:25 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		o_output(t_print **list)
{
	char	*oct;
	ssize_t	len;

	if (LF && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		oct = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base((unsigned short)VAL_UINT, "01234567", 8) :
			pf_itoa_base((unsigned char)VAL_UINT, "01234567", 8);
	else
		oct = pf_itoa_base(VAL_UINT, "01234567", 8);
	len = ft_strlen(oct);
	if (len == 1 && oct[0] == '0' && P)
	{
		free(oct);
		oct = NULL;
	}
	P && oct ? prec_calc(list, len) : 0;
	!PNB && MIN && f_exists(list, '#') && oct ? MIN-- : 0;
	oct && f_exists(list, '-') ? minus_flag_uox(list, oct, len, 'o') : 0;
	MIN = !P && oct && MIN > len ? MIN - len : MIN;
	MIN ? put_wflags(list, MIN) : 0;
	oct && !f_exists(list, '-') ? minus_flag_uox(list, oct, len, 'o') : 0;
	!oct && f_exists(list, '#') ? LEN += write(1, "0", 1) : 0;
	oct ? free(oct) : 0;
	return (1);
}
