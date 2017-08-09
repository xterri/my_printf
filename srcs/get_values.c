/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:05:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/07 14:28:20 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_values(t_print **list, va_list ap)
{
	if (F == 'c' || F == 'd' || F == 'i' || F == '%')
		(*list)->val.cdi = va_arg(ap, int);
	else if (F == 'u' || F == 'o' ||F == 'x' || F == 'X')
		(*list)->val.uoxX = va_arg(ap, unsigned int);
	else if (F == 'U' || F == 'O')
		(*list)->val.UO = va_arg(ap, unsigned long);
	F == 'D' ? (*list)->val.D = va_arg(ap, long) : 0;
	F == 's' ? (*list)->val.s = va_arg(ap, char *) : 0;
	F == 'p' ? (*list)->val.p = va_arg(ap, void *) : 0;
	F == 'C' ? (*list)->val.C = va_arg(ap, wchar_t) : 0;
	F == 'S' ? (*list)->val.S = va_arg(ap, wchar_t *) : 0;
}
