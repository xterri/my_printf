/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 22:41:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/10 23:22:12 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		x_output(t_print **list)
{
	char	*hex;
	size_t	len;

//	if (!(check_valid(list, 'x')))
//		return (-1);
	if (LF && F == 'x' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		hex = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base((unsigned short)VAL_UINT, "0123456789abcdef", 16) :
			pf_itoa_base((unsigned char)VAL_UINT, "0123456789abcdef", 16);
	if (LF && F == 'X' && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		hex = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base((unsigned short)VAL_UINT, "0123456789ABCDEF", 16) :
			pf_itoa_base((unsigned char)VAL_UINT, "0123456789ABCDEF", 16);
	else
		hex = F == 'x' ? pf_itoa_base(VAL_UINT, "0123456789abcdef", 16) :
			pf_itoa_base(VAL_UINT, "0123456789ABCDEF", 16);
	len = ft_strlen(hex);
	MIN = MIN > 1 && f_exists(list, '#') ? MIN - 2 : MIN;
	P ? prec_calc(list, len) : 0;
	if (f_exists(list, '-'))
	{
		if (f_exists(list, '#'))
			LEN += F == 'x' ? write(1, "0x", 2) : write(1, "0X", 2);
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, hex, len);
	}
	MIN = !P && MIN > len ? MIN - len : MIN;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
	{
		if (f_exists(list, '#'))
			LEN += F == 'x' ? write(1, "0x", 2) : write(1, "0X", 2);
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, hex, len);
	}
	free(hex);
	hex = NULL; // necessary?
	return (1);
}

