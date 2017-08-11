/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ushort_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:33:50 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/10 14:44:22 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ushort_output(t_print **list)
{
	char			*oct;
	size_t			len;
	unsigned short	val;

	val = (unsigned short)VAL_UINT;
	oct = pf_itoa_base(val, "01234567", 8);
	len = ft_strlen(oct);
	f_exists(list, '#') ? MIN -= 1 : 0;
	if (f_exists(list, '-'))
	{
		f_exists(list, '#') ? LEN += write(1, "0", 1) : 0;
		LEN += write(1, oct, len);
	}
	MIN = MIN > len ? MIN - len : 0;
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
	{
		f_exists(list, '#') ? LEN += write(1, "0", 1) : 0;
		LEN += write(1, oct, len);
	}
	free(oct);
	oct = NULL; // necessary?
	return(1);
}
