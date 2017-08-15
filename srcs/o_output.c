/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:50:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 15:32:24 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		o_output(t_print **list)
{
	char	*oct;
	ssize_t	len;

	if (LF && F == 'o' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		oct = ONLY_H ? ITOA(USHORT, O_STR, 8) : ITOA(UCHAR, O_STR, 8);
	else
		oct = F != 'O' && !LF ? ITOA(UINT, O_STR, 8) : ITOA(VAL_UINT, O_STR, 8);
	len = ft_strlen(oct);
	if (len == 1 && !ft_strcmp(oct, "0") && P && !PNB)
		free_str(&oct);
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
