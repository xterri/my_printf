/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prec_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:50:49 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/08 09:57:26 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prec_calc(t_print **list, size_t digits)
{
	f_exists(list, '0') ? replace(WO, '0', 0) : 0;
	if (MIN > digits && MIN >= PNB)
		MIN -= PNB < digits ? digits : PNB;
	else if (PNB > digits || MIN < PNB)
		MIN = 0;
	PNB = (int)PNB - (int)digits >= 0 ? 
		PNB - digits : 0;
}
