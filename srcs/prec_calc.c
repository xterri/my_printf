/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prec_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:50:49 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 19:30:06 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prec_calc(t_print **list, ssize_t digits)
{
	PNB > 0 && f_exists(list, '0') ? replace(WO, '0', 0) : 0;
	if (MIN >= digits && MIN >= PNB)
		MIN -= PNB < digits ? digits : PNB;
	else if (PNB > digits || MIN < PNB)
		MIN = 0;
	else
	{
		MIN = 0;
		PNB = 0;
	}
	PNB = ((int)PNB - (int)digits) >= 0 ? PNB - digits : 0;
}
