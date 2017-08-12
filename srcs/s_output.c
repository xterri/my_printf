/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:18:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 17:32:12 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		s_output(t_print **list)
{
	ssize_t	len;

	!VAL_STR ? VAL_STR = "(null)" : 0;
	len = ft_strlen(VAL_STR);
	if (!P && MIN < len && !LF)
		return (LEN += write(1, VAL_STR, len));
	if (PNB >= len)
	{
		if (PNB >= MIN)
		{
			PNB -= (PNB - MIN);
			MIN = PNB - len;
		}
		else if (PNB && MIN > PNB)
			MIN = (MIN - PNB) + (PNB - len);
	}
	else if (MIN > len)
		if (!P)
		{
			MIN -= len;
			!PNB ? PNB += len : 0;
		}
	if (PNB < len)
		MIN = MIN > PNB ? MIN - PNB : 0;
	if (f_exists(list, '-'))
		minus_flag_uoxs(list, VAL_STR, 0, 's');
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
		minus_flag_uoxs(list, VAL_STR, 0, 's');
	return (1);
}
