/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 23:24:38 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/13 12:42:38 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		c_output(t_print **list)
{
	intmax_t	c;

	c = F == 'C' || (!ft_strncmp(LO, "l", 1) && ft_strcmp(LO, "ll")) ?
			(wchar_t)VAL_INT : (int)VAL_INT;
	f_exists(list, '-') ? write(1, &c, 1) : 0;
	MIN ? put_wflags(list, MIN - 1) : 0;
	!f_exists(list, '-') ? write(1, &c, 1) : 0;
	LEN++;
	return (1);
}
