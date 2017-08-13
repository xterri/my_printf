/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:18:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 11:47:13 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		s_output(t_print **list)
{
	ssize_t	len;

	if (!ft_strncmp(LO, "l", 1) && ft_strcmp(LO, "ll"))
		return (S_output(list));
	!VAL_STR ? VAL_STR = "(null)" : 0;
	len = ft_strlen(VAL_STR);
	if (!P && MIN < len && !LF)
		return (LEN += write(1, VAL_STR, len));
	P && PNB ? prec_calc_s(list, len) : 0;
	if (f_exists(list, '-'))
		minus_flag_sS(list, VAL_STR, 's');
	MIN ? put_wflags(list, MIN) : 0;
	if (!f_exists(list, '-'))
		minus_flag_sS(list, VAL_STR, 's');
	return (1);
}
