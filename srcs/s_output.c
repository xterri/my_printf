/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:18:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 14:49:18 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		s_output(t_print **list)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(VAL_STR);
//	if (!(check_valid(list, 's')))
//		return (-1);
	if (!P && MIN < len && !LF)
	{
		LEN += write(1, VAL_STR, len);
		return (1);
	}
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
		while (VAL_STR[i] && i < PNB)
			LEN += write(1, &VAL_STR[i++], 1);
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
		while (VAL_STR[i] && i < PNB)
			LEN += write(1, &VAL_STR[i++], 1);
	return (1);
}
