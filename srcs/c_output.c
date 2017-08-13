/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 23:24:38 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/12 18:47:18 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		c_output(t_print **list)
{
	f_exists(list, '-') ? write(1, &VAL_INT, 1) : 0;
	MIN ? put_wflags(list, MIN - 1) : 0;
	!f_exists(list, '-') ? write(1, &VAL_INT, 1) : 0;
	LEN++;
	return (1);
}
