/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_output.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 23:24:38 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 01:58:19 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		c_output(t_print **list)
{
	if (!(check_valid(list, 'c')))
			return (-1);
	f_exists(list, '-') ? LEN += write(1, &(*list)->val.val_int, 1) : 0;
	MIN ? put_wflags(list, MIN - 1) : 0;
	!WF ? LEN += write(1, &(*list)->val.val_int, 1) : 0;
	return (1);
}	
