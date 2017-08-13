/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prec_calc_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:15:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 12:09:36 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prec_calc_s(t_print **list, ssize_t len)
{
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
	{
		if (!P)
		{
			MIN -= len;
			!PNB ? PNB += len : 0;
		}
	}
	if (PNB < len)
		MIN = MIN > PNB ? MIN - PNB : 0;
}
