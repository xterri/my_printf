/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minus_flag_uoxs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 10:17:15 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/11 17:25:22 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	minus_flag_uoxs(t_print **list, char *str, ssize_t len, char format)
{
	ssize_t	i;

	i = 0;
	if (format == 'u')
	{
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, str, len);
	}
	else if (format == 'o')
	{
		!PNB && str[0] != '0' && f_exists(list, '#') ?
			LEN += write(1, "0", 1) : 0;
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, str, len);
	}
	else if (format == 'x')
	{
		!f_exists(list, '-') && !f_exists(list, '0') && MIN ?
				put_wflags(list, MIN) : 0;
		if (f_exists(list, '#') && str[0] != '0')
			LEN += F == 'x' ? write(1, "0x", 2) : write(1, "0X", 2);
		!f_exists(list, '-') && f_exists(list, '0') && MIN ?
			put_wflags(list, MIN) : 0;
		PNB ? prec_fill(list, PNB) : 0;
		LEN += write(1, str, len);
		f_exists(list, '-') && MIN ? put_wflags(list, MIN) : 0;
	}
	else if (format == 's')
		while (str[i] && i < PNB)
			LEN += write(1, &str[i++], 1);
}
