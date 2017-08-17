/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_values.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 21:05:12 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 17:49:51 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_values(t_print **list, va_list ap)
{
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
	else if (F == 'n')
		N_PTR = va_arg(ap, int *);
	else if (F == 'f' || F == 'F')
	{
		VAL_DBL = va_arg(ap, double);
		VAL_DBL < 0 ? NEG++ : 0;
		VAL_DBL = NEG ? (double)-VAL_DBL : (double)VAL_DBL;
	}
}
