/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:50:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 10:36:07 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		o_output(t_print **list)
{
	char	*oct;
	size_t	len;

// if (!(check_valid(list, 'o')))
//		return (-1);
	if (LF && (!ft_strncmp(LO, "h", 1) || !ft_strcmp(LO, "hh")))
		oct = !ft_strncmp(LO, "h", 1) && ft_strcmp(LO, "hh") ? 
			pf_itoa_base((unsigned short)VAL_UINT, "01234567", 8) : 
			pf_itoa_base((unsigned char)VAL_UINT, "01234567", 8); 
	else
		oct = pf_itoa_base(VAL_UINT, "01234567", 8);
	len = ft_strlen(oct);
	P ? prec_calc(list, len) : 0;
	!PNB && MIN && f_exists(list, '#') ? MIN-- : 0;
	if (f_exists(list, '-'))
		minus_flag_uoxs(list, oct, len, 'o');
	MIN = !P && MIN > len ? MIN - len : MIN;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
		minus_flag_uoxs(list, oct, len, 'o');
	free(oct);
	oct = NULL; //necessary?
	return (1);
}
