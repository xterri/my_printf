/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:05:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/08 21:17:02 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_values(t_print **list, va_list ap)
{
	if (F == 'c' || F == 'd' || F == 'i' || F == '%' || F == 'D')
		(*list)->val.val_int = va_arg(ap, intmax_t);
	else if (F == 'u' || F == 'U' || F == 'o' || F == 'O' || F == 'x' ||
			F == 'X')
		(*list)->val.val_uint = va_arg(ap, uintmax_t);
	else if (F == 'C')
		(*list)->val.wide_c = va_arg(ap, wchar_t);
	else if (F == 's')
		(*list)->val.str = va_arg(ap, char *);
	else if (F == 'S')
		(*list)->val.wide_s = va_arg(ap, wchar_t *);
	else if (F == 'p')
		(*list)->val.addr = va_arg(ap, void *);
}
