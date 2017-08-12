/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_plus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:17:59 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 15:45:13 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	put_plus(t_print **list, intmax_t val)
{
	if (val >= 0)
	{
		if (f_exists(list, '+'))
			ft_putchar('+');
		else if (f_exists(list, ' '))
			ft_putchar(' ');
	}
	else
	{
		NEG++;
		val = -val;
	}
	replace(WO, '+', 0);
	replace(WO, ' ', 0);
	return (val);
}
