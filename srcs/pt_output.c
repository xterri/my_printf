/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 02:09:29 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/09 02:23:17 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pt_output(t_print **list)
{
	f_exists(list, '-') ? LEN += write(1, "%", 1) : 0;
	if (MIN > 1)
		put_wflags(list, MIN - 1);
	!f_exists(list, '-') ? LEN += write(1, "%", 1) : 0;
	return (1);
}
