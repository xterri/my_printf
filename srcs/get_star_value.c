/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_star_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:18:35 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 15:34:41 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_star_value(t_print **list, va_list ap)
{
	int		tmp;

	tmp = va_arg(ap, ssize_t);
	if (!P && !MIN)
	{
		tmp < 0 ? WO[WF++] = '-' : 0;
		tmp < 0 ? tmp = -tmp : 0;
		MIN = tmp;
	}
	else if (P)
	{
		if (tmp < 0 && (F == 's' || F == 'S'))
			tmp = -tmp;
		PNB = tmp;
	}
}
