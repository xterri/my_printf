/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 14:18:26 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/15 16:59:26 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		s_output(t_print **list)
{
	ssize_t	len;

	if (!ft_strncmp(LO, "l", 1) && ft_strcmp(LO, "ll"))
		return (ls_output(list));
	!VAL_STR ? VAL_STR = "(null)" : 0;
	len = ft_strlen(VAL_STR);
	if (!P && MIN < len && !LF)
		return (LEN += write(1, VAL_STR, len));
	prec_calc_s(list, len);
	f_exists(list, '-') ? minus_flag_s(list, VAL_STR, 's') : 0;
	MIN ? put_wflags(list, MIN) : 0;
	!f_exists(list, '-') ? minus_flag_s(list, VAL_STR, 's') : 0;
	return (1);
}
