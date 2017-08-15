/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 11:21:51 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 13:23:07 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ls_output(t_print **list)
{
	size_t	i;
	ssize_t	len;

	!VAL_WS ? VAL_WS = L"(null)" : 0;
	len = ft_wcslen(VAL_WS);
	if (!P && MIN < len && !LF)
	{
		i = 0;
		while (VAL_WS[i])
			LEN += write(1, &VAL_WS[i++], 1);
		return (1);
	}
	prec_calc_s(list, len);
	f_exists(list, '-') ? minus_flag_s(list, VAL_WS, 'S') : 0;
	MIN ? put_wflags(list, MIN) : 0;
	!f_exists(list, '-') ? minus_flag_s(list, VAL_WS, 'S') : 0;
	return (1);
}
