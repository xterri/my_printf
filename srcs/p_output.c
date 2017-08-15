/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:42:50 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 16:31:38 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		p_output(t_print **list)
{
	char	*addr;
	ssize_t	len;

	addr = ft_itoa_base((intmax_t)VAL_ADDR, 16);
	len = ft_strlen(addr);
	if (f_exists(list, '-') || f_exists(list, '0'))
	{
		LEN += write(1, "0x", 2);
		if (len == 1 && !ft_strcmp(addr, "0") && P && !PNB)
			free_str(&addr);
		LEN += addr ? write(1, addr, len) : 0;
	}
	MIN = MIN > len ? MIN - (len + 2) : 0;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-') && !f_exists(list, '0'))
	{
		LEN += write(1, "0x", 2);
		if (len == 1 && !ft_strcmp(addr, "0") && P && !PNB)
			free_str(&addr);
		PNB && (PNB - len) >= 0 ? prec_fill(list, PNB - len) : 0;
		LEN += addr ? write(1, addr, len) : 0;
	}
	addr ? free(addr) : 0;
	return (1);
}
