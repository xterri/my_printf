/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prec_calc_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:15:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 16:51:48 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		prec_calc_s2(t_print **list, ssize_t len)
{
	if (MIN && len > MIN)
	{
		PNB = len;
		MIN = 0;
	}
	else
	{
		MIN ? PNB -= (PNB - MIN) : 0;
		MIN ? MIN = PNB - len : 0;
	}
}

void	prec_calc_s(t_print **list, ssize_t len)
{
	if (!P && len > MIN)
	{
		PNB = len;
		return ;
	}
	if (PNB >= len)
	{
		if (PNB >= MIN)
			prec_calc_s2(list, len);
		PNB && MIN > PNB ? MIN = ((MIN - PNB) + (PNB - len)) : 0;
	}
	else if (MIN > len)
	{
		!P ? MIN -= len : 0;
		!P && !PNB ? PNB += len : 0;
	}
	if (PNB < len)
		MIN = MIN > PNB ? MIN - PNB : 0;
}
