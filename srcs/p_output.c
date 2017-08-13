/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:42:50 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 12:33:16 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		p_output(t_print **list)
{
	char	*addr;
	ssize_t	len;

	addr = ft_itoa_base((intmax_t)VAL_ADDR, 16);
	len = ft_strlen(addr);
	if (f_exists(list, '-'))
	{
		LEN += write(1, "0x", 2);
		if (!ft_strcmp(addr, "0"))
			return (LEN = -1);
		LEN += write(1, addr, len);
	}
	MIN = MIN > len ? MIN - (len + 2) : 0;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
	{
		LEN += write(1, "0x", 2);
		if (!ft_strcmp(addr, "0"))
			return (LEN = -1);
		LEN += write(1, addr, len);
	}
	free(addr);
	return (1);
}
