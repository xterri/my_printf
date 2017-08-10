/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_output.c			                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:42:50 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 17:05:42 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     p_output(t_print **list)
{
	char    *addr;
	size_t  len;

//  if (!(check_valid(list, 'p')))
//      return (-1);
	addr = ft_itoa_base((intmax_t)VAL_ADDR, 16);
	len = ft_strlen(addr);
	if (f_exists(list, '-'))
	{
		LEN += write(1, "0x", 2);
		LEN += write(1, addr, len);
	}
	MIN = MIN > len ? MIN - (len + 2) : 0;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
	{
		LEN += write(1, "0x", 2);
		LEN += write(1, addr, len);
	}
	free(addr);
	addr = NULL; // necessary?
	return (1);
}
