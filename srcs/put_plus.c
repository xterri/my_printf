/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_plus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:17:59 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/16 16:28:26 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	put_plus(t_print **list, intmax_t val)
{
	if (val >= 0)
	{
		if (f_exists(list, '+'))
			write(1, "+", 1);
		else if (f_exists(list, ' '))
			write(1, " ", 1);
	}
	else if (val != (intmax_t)-0x8000000000000000)
	{
		NEG++;
		val = -val;
	}
	replace(WO, '+', 0);
	replace(WO, ' ', 0);
	return (val);
}
