/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:05:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/14 11:14:42 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_values(t_print **list, va_list ap)
{
	if (f_exists(list, '*'))
		MIN = va_arg(ap, ssize_t);
	if (f_exists(list, '*') && !PNB)
		PNB = va_arg(ap, ssize_t);
	if (F == 'c' || F == 'd' || F == 'i' || F == '%' || F == 'D')
		VAL_INT = va_arg(ap, intmax_t);
	else if (F == 'u' || F == 'U' || F == 'o' || F == 'O' || F == 'x' ||
			F == 'X')
		VAL_UINT = va_arg(ap, uintmax_t);
	else if (F == 'C')
		VAL_WC = va_arg(ap, wchar_t);
	else if (F == 's')
		VAL_STR = va_arg(ap, char *);
	else if (F == 'S')
		VAL_WS = va_arg(ap, wchar_t *);
	else if (F == 'p')
		VAL_ADDR = va_arg(ap, void *);
}
