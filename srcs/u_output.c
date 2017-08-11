/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:19:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/10 22:37:42 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int		u_output(t_print **list)
{
	char	*uint;
	size_t	len;

//	if (!(check_valid(list, 'o')))
//		return (-1);
	if (LF && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		uint = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ?
			pf_itoa_base((unsigned short)VAL_UINT, "0123456789", 10) :
			pf_itoa_base((unsigned char)VAL_UINT, "0123456789", 10);
	else
		uint = pf_itoa_base(VAL_UINT, "0123456789", 10);
	len = ft_strlen(uint);
	P ? prec_calc(list, len) : 0;
	!PNB && MIN && f_exists(list, '#') ? MIN-- : 0;
	if (f_exists(list, '-'))
	{
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, uint, len);
	}
	MIN = !P && MIN > len ? MIN - len : MIN;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
	{
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, uint, len);
	}
	free(uint);
	uint = NULL; //necessary?
	return (1);
}
