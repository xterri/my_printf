/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:05:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/04 21:15:59 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_value(t_print **list, va_list ap)
{
	if (L>>format == 'c' || L>>format == 'd' || 
		L>>format == 'i' || L>>format == '%')
		L>>val.cdi = va_arg(ap, int);
	else if (L>>format == 'u' || L>>format == 'o' ||
			L>>format == 'x' || L>>format == 'X')
		L>>val.uoxX = va_arg(ap, unsigned int);
	else if (L>>format == 'U' || L>>format == 'O')
		L>>val.UO = va_arg(ap, unsigned long);
	L>>format == 'D' ? L>>val.D = va_arg(ap, long) : 0;
	L>>format == 's' ? L>>val.s = va_arg(ap, char *) : 0;
	L>>format == 'p' ? L>>val.p = va_arg(ap, void *) : 0;
	L>>format == 'C' ? L>>val.C = va_arg(ap, wchar_t) : 0;
	L>>format == 'S' ? L>>val.S = va_arg(ap, wchar_t *) : 0;
}
