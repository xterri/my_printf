/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_wflags.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynh <thuynh@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 10:34:04 by thuynh            #+#    #+#             */
/*   Updated: 2017/08/14 11:56:36 by thuynh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_wflags(t_print **list, ssize_t min)
{
	if (f_exists(list, '0') && !f_exists(list, '-'))
	{
		while (min-- > 0)
			LEN += write(1, "0", 1);
	}
	else
		while (min-- > 0)
			LEN += write(1, " ", 1);
}
