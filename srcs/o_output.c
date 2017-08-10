/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   o_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 18:50:05 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/10 11:53:29 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		o_output(t_print **list)
{
	char	*oct;
	size_t	len;

// if (!(check_valid(list, 'o')))
//		return (-1);
// if len modifier is opened and is equal to h -> pass to short function
// else if len modifier is opened and equal to hh -> pass to signed char func
	// return 1 upon success and -1 on fail
	oct = pf_itoa_base(VAL_UINT, "01234567", 8);
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
	oct = NULL; //necessary?
	return (1);
}
